if status is-interactive
    # Commands to run in interactive sessions can go here
end

set -q GHCUP_INSTALL_BASE_PREFIX[1]; or set GHCUP_INSTALL_BASE_PREFIX $HOME ; set -gx PATH $HOME/.cabal/bin /home/ahmed/.ghcup/bin $PATH # ghcup-env

set -gx PATH "$HOME/.cargo/bin" $PATH;
