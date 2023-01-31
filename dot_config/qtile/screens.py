"""
Top bar configuration lives here
"""
import os

from libqtile import bar, widget, qtile
from libqtile.config import Screen
from libqtile.lazy import lazy

import widgets

from colours import color_schema
from utils import (
    DEFAULT_FONT,
    ICONS_DIR,
    WALLPAPER_PATH,
    KEYBOARD_LAYOUTS,
    BRIGHTNESS_DIR,
    SET_BRIGHTNESS_SHELL_CMD,
    GET_SPEAKERS_VOLUME_SHELL_CMD,
    RAISE_SPEAKERS_VOLUME_SHELL_CMD,
    LOWER_SPEAKERS_VOLUME_SHELL_CMD,
    ARE_SPEAKERS_MUTED_SHELL_CMD,
    TOGGLE_SPEAKERS_MUTE_SHELL_CMD,
    GET_MICROPHONE_VOLUME_SHELL_CMD,
    IS_MICROPHONE_MUTED_SHELL_CMD,
    TOGGLE_MICROPHONE_MUTE_SHELL_CMD,
    BLUETOOTH_DEVICE_HCI_PATH
)

screens = [
    Screen(
        top=bar.Bar(
            [
                widget.GroupBox(
                    font="MonoLisa, Bold",
                    fontsize=12,
                    margin_y=3,
                    margin_x=0,
                    padding_y=10,
                    padding_x=10,
                    rounded=False,
                    active=color_schema["text"],
                    inactive=color_schema["surface1"],
                    highlight_method="block",
                    this_screen_border=color_schema["surface0"],
                    this_current_screen_border=color_schema["surface0"],
                    other_screen_border=color_schema["base"],
                    other_current_screen_border=color_schema["base"],
                ),

                # ----------------------------------------
                widget.Spacer(
                    length=10,
                ),
                widget.WindowName(
                    font="MonoLisa, Bold",
                    fontsize=12,
                    foreground=color_schema["text"],
                    empty_group_string="Desktop"
                ),
                widget.Spacer(
                    length=bar.STRETCH,
                ),

                # ----------------------------------------

                widget.Mpris2(
                    name="Spotify",
                    objname="org.mpris.MediaPlayer2.spotify",
                    display_metadata=['xesam:title', 'xesam:artist'],
                    font="MonoLisa, Bold",
                    foreground=color_schema["green"],
                    fontsize=12,
                    padding=20,
                    width=200,
                    scroll_interval=0.001,
                    scroll_step=0.1,
                    scroll_delay=2
                ),

                widget.Spacer(
                    length=16,
                ),

                widget.Wlan(
                    format="{essid}",
                    font="MonoLisa, Bold",
                    foreground=color_schema["blue"],
                    mouse_callbacks={lazy.spawn("nm-connection-editor")},
                    fontsize=12,
                    padding=0,
                ),

                widget.Spacer(
                    length=16,
                ),

                # widget.Image(
                #     filename  = '~/.config/qtile/assets/bar/sun.png',
                #     margin    = 8,
                # ),
                widget.Backlight(
                    font="MonoLisa, Bold",
                    foreground=color_schema["yellow"],
                    brightness_file="/sys/class/backlight/intel_backlight/actual_brightness",
                    max_brightness_file="/sys/class/backlight/intel_backlight/max_brightness",
                    fontsize=12,
                    padding=0,
                    change_command="pkexec brillo -u 300000 -S {}"
                ),

                widget.Spacer(
                    length=16,
                ),

                # widget.Image(
                #     filename  = '~/.config/qtile/assets/bar/vol.png',
                #     margin    = 8,
                # ),
                widget.Volume(
                    font="MonoLisa, Bold",
                    foreground=color_schema["peach"],
                    fontsize=12,
                    padding=0,
                ),

                widget.Spacer(
                    length=16,
                ),

                # widget.Image(
                #     filename  = '~/.config/qtile/assets/bar/bat.png',
                #     margin    = 7
                # ),
                widget.Battery(
                    format='{char}{percent:2.0%}',
                    charge_char=' ',
                    discharge_char='',
                    full_char=' ',
                    unknown_char=' ',
                    font="MonoLisa, Bold",
                    foreground=color_schema["red"],
                    fontsize=12,
                    padding=0,
                    show_short_text=False,
                    update_interval=1,
                ),

                widget.Spacer(
                    length=15,
                ),
                widget.Spacer(
                    length=10,
                    background=color_schema["surface0"]
                ),
                widget.Systray(
                    icon_size=24,
                    padding=0,
                    background=color_schema["surface0"]
                ),
                widget.Spacer(
                    length=10,
                    background=color_schema["surface0"]
                ),
                widget.Spacer(
                    length=10,
                ),

                widget.Clock(
                    format='%a %d %b %H:%M',
                    font="MonoLisa, Bold",
                    foreground=color_schema["text"],
                ),
                widget.Spacer(
                    length=5,
                ),

                # widget.CurrentLayoutIcon(
                #     padding  = 0,
                #     scale    = 0.5,
                #     # Can't get this to work
                #     # custom_icon_paths = [
                #     #     '~/.config/qtile/assets/layout',
                #     # ]
                # ),

                widget.Image(
                    filename='~/.config/qtile/assets/bar/power.png',
                    margin=8,
                    mouse_callbacks={
                        'Button1': lambda: qtile.cmd_spawn('rofi -show power')
                    }
                ),

                # qtile.cmd_spawn("rofi -show drun")

                widget.Spacer(
                    length=10,
                ),
            ],
            30,
            margin=[12, 12, 6, 12],
            background=color_schema["mantle"]
        ),
        bottom=bar.Gap(6),
        left=bar.Gap(6),
        right=bar.Gap(6),
    ),
    Screen(
        top=bar.Bar(
            [
                widget.GroupBox(
                    font="MonoLisa, Bold",
                    fontsize=12,
                    margin_y=3,
                    margin_x=0,
                    padding_y=10,
                    padding_x=10,
                    rounded=False,
                    active=color_schema["text"],
                    inactive=color_schema["surface1"],
                    highlight_method="block",
                    this_screen_border=color_schema["surface0"],
                    this_current_screen_border=color_schema["surface0"],
                    other_screen_border=color_schema["base"],
                    other_current_screen_border=color_schema["base"],
                ),

                # ----------------------------------------
                widget.Spacer(
                    length=10,
                ),
                widget.WindowName(
                    font="MonoLisa, Bold",
                    fontsize=12,
                    foreground=color_schema["text"],
                    # fmt = "|  {}",
                    empty_group_string="Desktop"
                ),
                widget.Spacer(
                    length=bar.STRETCH,
                ),

                # ----------------------------------------

                widget.Mpris2(
                    name="Spotify",
                    objname="org.mpris.MediaPlayer2.spotify",
                    display_metadata=['xesam:title', 'xesam:artist'],
                    font="MonoLisa, Bold",
                    foreground=color_schema["green"],
                    fontsize=12,
                    padding=20,
                    width=200,
                    scroll_interval=0.001,
                    scroll_step=0.1,
                    scroll_delay=2
                ),

                widget.Spacer(
                    length=16,
                ),

                widget.Wlan(
                    format="{essid}",
                    font="MonoLisa, Bold",
                    foreground=color_schema["blue"],
                    mouse_callbacks={lazy.spawn("nm-connection-editor")},
                    fontsize=12,
                    padding=0,
                ),

                widget.Spacer(
                    length=16,
                ),

                # widget.Image(
                #     filename  = '~/.config/qtile/assets/bar/sun.png',
                #     margin    = 8,
                # ),
                widget.Backlight(
                    font="MonoLisa, Bold",
                    foreground=color_schema["yellow"],
                    brightness_file="/sys/class/backlight/intel_backlight/actual_brightness",
                    max_brightness_file="/sys/class/backlight/intel_backlight/max_brightness",
                    fontsize=12,
                    padding=0,
                    change_command="brillo -u 300000 -S {}"
                ),

                widget.Spacer(
                    length=16,
                ),

                # widget.Image(
                #     filename  = '~/.config/qtile/assets/bar/vol.png',
                #     margin    = 8,
                # ),
                widget.Volume(
                    font="MonoLisa, Bold",
                    foreground=color_schema["peach"],
                    fontsize=12,
                    padding=0,
                ),

                widget.Spacer(
                    length=16,
                ),

                # widget.Image(
                #     filename  = '~/.config/qtile/assets/bar/bat.png',
                #     margin    = 7
                # ),
                widget.Battery(
                    format='{char}{percent:2.0%}',
                    charge_char=' ',
                    discharge_char='',
                    full_char=' ',
                    unknown_char=' ',
                    font="MonoLisa, Bold",
                    foreground=color_schema["red"],
                    fontsize=12,
                    padding=0,
                    show_short_text=False,
                    update_interval=1,
                ),

                widget.Spacer(
                    length=14,
                ),

                widget.Clock(
                    format='%a %d %b %H:%M',
                    font="MonoLisa, Bold",
                ),
                widget.Spacer(
                    length=5,
                ),

                # widget.CurrentLayoutIcon(
                #     padding  = 0,
                #     scale    = 0.5,
                #     # Can't get this to work
                #     # custom_icon_paths = [
                #     #     '~/.config/qtile/assets/layout',
                #     # ]
                # ),

                widget.Image(
                    filename='~/.config/qtile/assets/bar/power.png',
                    margin=8,
                    mouse_callbacks={
                        'Button1': lambda: qtile.cmd_spawn('rofi -show power')
                    }
                ),

                # qtile.cmd_spawn("rofi -show drun")

                widget.Spacer(
                    length=10,
                ),
            ],
            30,
            margin=[12, 12, 6, 12],
            background=color_schema["mantle"]
        ),
        bottom=bar.Gap(6),
        left=bar.Gap(6),
        right=bar.Gap(6),
    ),
]
