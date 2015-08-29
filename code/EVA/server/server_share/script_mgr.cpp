#include "script_mgr.h"
#include <nel/misc/debug.h>
#include <server_share/lua_engine.h>
#include <server_share/server_def.h>
#include <string>



extern int  tolua_base_open (lua_State* tolua_S);

using namespace std;
using namespace DEF;
using namespace NLMISC;
using namespace NLNET;

NLMISC_COMMAND (loadlua, "reload lua file.", "")
{
    if(args.size() != 0) return false;

    log.displayNL ("Load Script...");

    CConfigFile::CVar* pVar = NULL;

    if ((pVar = Config.getVarPtr("LuaScript")) != NULL)
    {
        for (uint i = 0; i < pVar->size(); ++i)
        {
            string script_full_path = CPath::lookup( pVar->asString(i) );
            log.displayNL ("Loading %s.", script_full_path.c_str());

            if ( !ScriptMgr.LoadScrpit(script_full_path.c_str()) )
            {
                log.displayNL ("Load Script Fail.  %s", script_full_path.c_str());
                return false;
            }
        }
    }

    log.displayNL ("Load Script Sucess.");
    return true;
}

void CScriptMgr::init( TOLUA_OPEN pToluaOpen )
{
	m_EventReg.resize(SCRIPT_EVENT_MAX);

    //string fn = IService::getInstance()->SaveFilesDirectory.toString();
    string log_file = /*fn +*/ Config.getVar("LogDirectory").asString();
    string lua_log = log_file + "lua_engine.log";

    nlassert( m_LuaEngine.Init(lua_log) );

    tolua_base_open(m_LuaEngine.GetLuaState());

    if ( pToluaOpen!=NULL )
    {
        pToluaOpen( m_LuaEngine.GetLuaState() );
    }

    nlassert(ICommand::execute ("loadlua", *InfoLog));
}

bool CScriptMgr::register_event( string script_scope, DEF::EVENT_ID script_event )
{
	bool res = false;
	if ( script_event < SCRIPT_EVENT_MAX )
	{
		m_EventReg[script_event].push_back(script_scope);
		res = true;
	}
	return res;
}

bool CScriptMgr::on_event( DEF::EVENT_ID script_event, LuaParams lua_in )
{
	bool res = false;

	if ( script_event<SCRIPT_EVENT_MAX && m_EventReg[script_event].size()>0 )
	{
        LuaParams lua_params(script_event);
        nlassert( lua_params.AddParams(lua_in) );

		for ( uint i=0; i<m_EventReg[script_event].size(); ++i )
		{
			res = m_LuaEngine.RunLuaFunction( "OnEvent", m_EventReg[script_event][i].c_str(), NULL, 
                                                         lua_params.GetParams(), lua_params.Count() );
		}
	}

	return res;
}

LuaParams CScriptMgr::run( std::string script_scope, std::string script_name, LuaParams lua_in, uint outnum )
{
    nlassert(outnum<=LuaParams::MAX_PARAMS);

    LuaParams lua_out;
    lua_out.resize(outnum);

    bool run_ret = m_LuaEngine.RunLuaFunction( script_name.c_str(), script_scope.c_str(), NULL, 
                                                lua_in.GetParams(), lua_in.Count(),
                                                lua_out.GetParams(), lua_out.Count() );

    //nlassert( run_ret );

    if ( !run_ret )
    {
        lua_out.resize(0);
    }

    return lua_out;
}

lua_State * CScriptMgr::GetLuaState()
{
    return m_LuaEngine.GetLuaState();
}

void CScriptMgr::release()
{
    m_LuaEngine.Release();
}

bool CScriptMgr::LoadScrpit( const char* szName )
{
    return m_LuaEngine.LoadLuaFile(szName);
}

