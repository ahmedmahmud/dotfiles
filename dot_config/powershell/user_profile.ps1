# Alias
Set-Alias ll ls
Set-Alias vim nvim

# Oh-my-posh
# oh-my-posh init pwsh | Invoke-Expression
# oh-my-posh init pwsh --config "$env:POSH_THEMES_PATH/nordtron.omp.json" | Invoke-Expression

# Starship prompt
Invoke-Expression (&starship init powershell)

# Neovim (Create symlink for neovide)
$env:XDG_CONFIG_HOME = 'C:\Users\ahmed\.config' 

# Komorebi
$env:KOMOREBI_CONFIG_HOME = 'C:\Users\ahmed\.config\komorebi'

# fnm
fnm env --use-on-cd | Out-String | Invoke-Expression

# Terminal-Icons
Import-Module -Name Terminal-Icons
