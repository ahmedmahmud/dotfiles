# -- PATHS -- #
fish_add_path $HOME/.cargo/bin # CARGO
fish_add_path /mnt/wsl/PHYSICALDRIVE1p5/home/ahmed/Documents/WACC_28/compile # WACC
fish_add_path $HOME/.local/bin

# -- INTERACTIVE SETTINGS -- #
if status is-interactive
    # -- HYDRO PROMPT -- #
    set -gx hydro_symbol_prompt ">"
    set -gx hydro_symbol_git_dirty "*"
    set -gx hydro_color_pwd blue
    set -gx hydro_color_prompt green
    set -gx hydro_color_git brblack
    set -gx hydro_color_error red
    set -gx hydro_color_duration magenta

    # Set zo to use correct command
    if grep -qi WSL /proc/version
        set -gx ZO_METHOD "wslview"
        
    end    
end

# Alias tools installed under diff names (APT)
if type -q fdfind
    alias fd="fdfind"
end
if type -q batcat
    alias bat="batcat"
end

#set -x FZF_DEFAULT_OPTS '
#    --cycle
#    --border
#    --layout=reverse
#    --preview-window=wrap
#    --color=fg:#e5e9f0,hl:#81a1c1
#    --color=fg+:#e5e9f0,hl+:#81a1c1
#    --color=info:#eacb8a,prompt:#bf6069,pointer:#b48dac
#    --color=marker:#a3be8b,spinner:#b48dac,header:#a3be8b
#'

test -r "~/.dir_colors" && eval $(dircolors ~/.dir_colors)
