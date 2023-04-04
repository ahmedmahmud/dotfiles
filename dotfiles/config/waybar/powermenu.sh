#!/usr/bin/env bash

op=$( echo -e "🛑 Shutdown\n🔄 Reboot\n🌙 Suspend\n🔒 Lock\n🚪 Logout" | wofi -i --dmenu --lines 7 | awk '{print tolower($2)}' )

case $op in 
    shutdown)
      ;&
    reboot)
      ;&
    suspend)
        echo "hi"
        systemctl $op
        ;;
    lock)
        swaylock
        ;;
    logout)
        wayland-logout 
        ;;
esac
