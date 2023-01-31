###############
### Layouts ###
###############

from libqtile import layout

from colours import color_schema

layouts = [
    layout.Columns(	
        border_focus  = color_schema["sapphire"],
        border_normal = color_schema["base"],
        margin        = 6,
        border_width  = 2,
    ),
    layout.Floating(	
        border_focus  = color_schema["sapphire"],
        border_normal = color_schema["base"],
        margin        = 12,
        border_width  = 2,
    ),
    layout.Spiral(
        border_focus  = color_schema["sapphire"],
        border_normal = color_schema["base"],
        margin        = 12,
        border_width  = 2,
    )
]

floating_layout = layout.Floating(
    border_width=0,
    border_focus="#000000",
    border_normal="#000000",
)