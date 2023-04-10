local wezterm = require 'wezterm'

local config = {}

if wezterm.config_builder then
  config = wezterm.config_builder()
end

config.window_padding = {
  right = '2cell',
  left = '2cell',
  top = '1cell',
  bottom = '1cell'
}

config.window_background_opacity = 0.6
config.color_scheme = "Catppuccin Mocha"
config.font = wezterm.font 'Iosevka Nerd Font'

config.use_fancy_tab_bar = false
config.hide_tab_bar_if_only_one_tab = true
config.tab_bar_at_bottom = true

return config
