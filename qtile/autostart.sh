#!/bin/bash

picom & 
lxsession & 
nm-applet &
pasystray &
xfce4-power-manager &
feh --bg-fill ~/.config/Wallpapers/catppuccin-cat.png &

ln -s $HOME/.config/qtile/assets/layout/layout-columns.png   ~/.icons &
ln -s $HOME/.config/qtile/assets/layout/layout-floating.png    ~/.icons &
ln -s $HOME/.config/qtile/assets/layout/layout-spiral.png      ~/.icons &
