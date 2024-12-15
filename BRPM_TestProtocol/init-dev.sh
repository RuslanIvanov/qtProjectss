#!/bin/bash

if [ "$1" == "" ]
then
  DEV="can0"
else
  DEV="$1"
fi

sudo ip link set $DEV type can bitrate 250000
ifconfig $DEV up

