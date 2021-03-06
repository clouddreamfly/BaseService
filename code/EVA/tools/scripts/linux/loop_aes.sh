#!/bin/sh -

DOMAIN=$(pwd |sed "s%/home/nevrax/%%")

while(true)
do
  echo AESAliasName= \"aes_$(hostname -s)\"\; > ./aes_alias_name.cfg

  if [ $(grep "AESPort[ \t]*=" */*cfg | grep -v debug | sed "s/.*=[ \t]*//" | sort -u | wc -l) -gt 1 ] ; then
      echo - FIXME: services don\'t agree on AESPort ; read
  fi
  if [ $(grep "AESPort[ \t]*=" */*cfg | grep -v debug | sed "s/.*=[ \t]*//" | sort -u | wc -l) -eq 1 ] ; then
      echo AESPort=$(grep "AESPort[ \t]*=" */*cfg| grep -v debug | sed "s/.*=[ \t]*//" | sort -u) >> ./aes_alias_name.cfg
  fi

  if [ $(grep "ASPort[ \t]*=" */*cfg | grep -v debug | sed "s/.*=[ \t]*//" | sort -u | wc -l) -gt 1 ] ; then
      echo - FIXME: services don\'t agree on ASPort ; read
  fi
  if [ $(grep "ASPort[ \t]*=" */*cfg | grep -v debug | sed "s/.*=[ \t]*//" | sort -u | wc -l) -eq 1 ] ; then
      echo ASPort=$(grep "ASPort[ \t]*=" */*cfg| grep -v debug | sed "s/.*=[ \t]*//" | sort -u) >> ./aes_alias_name.cfg
  fi

  ./live/service_ryzom_admin_service/ryzom_admin_service -A. -C. -L. --nobreak --fulladminname=admin_executor_service --shortadminname=AES
  sleep 2
done
