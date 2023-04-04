# alacritty &
# sleep 0.4
# hyprctl dispatch movetoworkspace special,Alacritty
#! /bin/bash
alacritty &
sleep 5
alacritty &
# hyprctl keyword windowrule "workspace unset,Alacritty"