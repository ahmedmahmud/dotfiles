####################
### Qtile Groups ###

####################
from libqtile.config import Group, Match, ScratchPad, DropDown

group_definitions = [
    {
        'name': 'web',
        'label': 'WWW',
        'matches': [Match(wm_class='firefox')],
        'layout': 'columns'
    },
    {
        'name': 'dev',
        'label': 'DEV',
        'layout': 'columns'
    },
    {
        'name': 'three',
        'label': 'THREE',
        'layout': 'columns'
    },
    {
        'name': 'four',
        'label': 'FOUR',
        'layout': 'columns'
    },
    {
        'name': 'spotify',
        'label': 'MUS',
        'matches': [Match(wm_class='spotify')],
        'layout': 'columns'
    },
    {
        'name': 'chat',
        'label': 'CHAT',
        'matches': [Match(wm_class='Discord')],
        'layout': 'columns'
    },
]

scratchpad_definitions = [
    ScratchPad("sp", [
        DropDown("term", "alacritty", x=0.2, y=0.2, width=0.6, height=0.6),
        DropDown("notes", "alacritty -e nvim", x=0.2, y=0.2, width=0.6, height=0.6),
    ])
]

groups = [Group(**group) for group in group_definitions] + scratchpad_definitions
