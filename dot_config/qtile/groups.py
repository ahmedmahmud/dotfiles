"""
Group definitions are here
"""
from libqtile.config import Group, Match

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
        'name': 'ms-teams',
        'label': 'THREE',
        'matches': [Match(wm_class='teams-for-linux')],
        'layout': 'columns'
    },
    {
        'name': 'telegram',
        'label': 'FOUR',
        'matches': [Match(wm_class='telegram-desktop')],
        'layout': 'columns'
    },
    {
        'name': 'spotify',
        'label': 'FIVE',
        'matches': [Match(wm_class='Spotify')],
        'layout': 'columns'
    },
    {
        'name': 'miscellaneous',
        'label': 'SIX',
        'layout': 'columns'
    },
]

groups = [Group(**group) for group in group_definitions]
