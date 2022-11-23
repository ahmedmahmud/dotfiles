# Aliases
alias run='f() { $@ > /dev/null 2>&1 &! };f'
alias rundump='f() { $@ &! };f'
ZSH_THEME="m3-round"
alias gs='git status'
alias ga='git add'
alias gc='git commit'
alias gp='git push'
alias c='clear'
alias cleaer='clear'
alias claer='clear'
alias pintos_test='f() { make clean; make; clear; make $1 };f'
alias grep='grep --color=auto'
alias path='echo -e ${PATH//:/\\n}'
alias dc='cd'
alias spotify='LD_PRELOAD=/usr/local/lib/spotify-adblock.so spotify'
alias dock='xrandr --output eDP-1 --auto --output DP-1-0 --auto --primary --right-of eDP-1'
alias laptop='xrandr --output eDP-1 --auto --primary --output DP-1-0 --off'
alias makeProg='cd ..; make; cd build; clear;'

doIt () {
    echo \'"$@"\' | pintos --filesys-size=2 -p ../../examples/halt.c -a halt -- -f -q run
}

alias pintos_program=doIt

# Load oh-my-zsh
export ZSH="$HOME/.oh-my-zsh"

plugins=(
    zsh-autosuggestions
    zsh-exa
    fast-syntax-highlighting
    z
    zsh-fzf-history-search
    zsh-shift-select
)

ZSH_THEME=robbyrussell

source $ZSH/oh-my-zsh.sh

# Load starship (theme)
# eval "$(starship init zsh)"

# Load fnm (node version manager)
export PATH=/home/ahmed/.fnm:$PATH
eval "$(fnm env)"

# Allow case-insensitive tab completion
autoload -Uz compinit && compinit
# zstyle ':completion:*' matcher-list 'm:{a-z}={A-Za-z}'
zstyle ':completion:*' matcher-list '' 'm:{a-zA-Z}={A-Za-z}'

# Stop highlight on paste
zle_highlight+=(paste:none)

# fnm
eval "$(fnm env --use-on-cd)"

# Load pintos
export PATH=~/documents/imperial/pintos_32/src/utils:$PATH
export PATH="$HOME/.local/bin:$PATH"

[ -f "/home/ahmed/.ghcup/env" ] && source "/home/ahmed/.ghcup/env" # ghcup-env
