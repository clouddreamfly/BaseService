#ifndef DEF_DB_H
#define DEF_DB_H

typedef uint32 DB_OPT;

enum TOPT
{
//	LOAD_PLAYER_REQUEST,
	LOAD_PLAYER_RESPONSE_SUCESS,
	LOAD_PLAYER_RESPONSE_FAIL,
	//GET_PLAYER_EXIST_REQUEST,
	//GET_PLAYER_LIST,
	//LOAD_SERVER_INFO,
	//CREATE_PLAYER,
	UPDATE_PLAYER,
    UPDATE_PLAYER_INFO,
	INSERT_MISSION_TEMP,
	UPDATA_MISSION_TEMP,
	DELETE_MISSION_TEMP,
	INSERT_MISSION_TRACKER,
	UPDATA_MISSION_TRACKER,
	DELETE_MISSION_TRACKER,
	INSERT_ITEM,
	UPDATA_ITEM,
	UPDATA_ITEM_AUCTION_SELL,
	DELETE_ITEM,
	UPDATA_ITEM_DATA,
	DELETE_ITEM_DATA,
	INSERT_ITEM_PARAM,
	UPDATA_ITEM_PARAM,
	DELETE_ITEM_PARAM,
	INSERT_HERO,
	UPDATA_HERO,
	DELETE_HERO,
	GET_FRIEND_LIST,
    GET_DUP_PLAYER_HERO,
    GET_PVP_PLAYER_BASE,
    GET_PVP_ROB_ITEM,
    MOVE_ITEM_TO_AUCTION,
    INSERT_ACHIEVEMENT,
    UPDATA_ACHIEVEMENT,
    DELETE_ACHIEVEMENT,
    INSERT_GUARD,
    UPDATE_GUARD,
    DELETE_GUARD,
    INSERT_CASTLE,
    UPDATE_CASTLE,
    DELETE_CASTLE,
    INSERT_LIMITUSE,
    UPDATE_LIMITUSE,
    DELETE_LIMITUSE,
    UPDATE_DUPINFO,
    UPDATE_EGSPLAYERINFO,
    INSERT_FRIENDLIST,
    UPDATE_FRIENDLIST,
    DELETE_FRIENDLIST,
    INSERT_FRIEND_BLACKLIST,
    DELETE_FRIEND_BLACKLIST,
    UPDATE_PVP_RANKING,
    UPDATE_COMPLATE_ACHIEVEMENT,
    INSERT_GRIMOIRE,
    UPDATE_GRIMOIRE,
    DELETE_GRIMOIRE,
    UPDATE_PLAYER_EXT,
    UPDATE_TECHNOLOGY,
	INVALD_OPT,
};

struct DBMsgData
{
public:
    virtual ~DBMsgData()  {}
};


#endif