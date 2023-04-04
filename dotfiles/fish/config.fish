# -- PATHS -- #
fish_add_path $HOME/.cargo/bin # CARGO

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
