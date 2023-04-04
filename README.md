<div align="center">

```ocaml
🥶 Dripfiles
```
<p float="left">
  <img src="assets/preview_empty.png" width="487" />
  <img src="assets/preview_apps.png" width="487" />
</p>

<div align="left">

---

<samp>
<b>My dotfiles across my linux, windows and wsl environments</b>
</samp>

<br />
<br />


> 🧊 Tool specific documentation are in their respective subdirectories

---
## <samp> Setup <samp>

These dotfiles are managed by [`dotter`](https://github.com/SuperCuber/dotter). Its configuration folder is `.dotter`
 - `global.toml` - Configuration for all `packages`
 - `linux/wsl/windows.toml` - Configuration for "profiles" that contain the relevant `packages`

### <samp><kbd>I.</kbd> [Install dotter](https://github.com/SuperCuber/dotter#installation)
```bash
# AUR
yay -S dotter-rs-bin

# Cargo
cargo install dotter
```

### <samp><kbd>II.</kbd> Apply
After configuring choosing a profile or creating your own with `packages` you want, run:
```bash
dotter deploy -l .dotter/<profile>.toml
```
> **Note:** `--force` flag may be required if you have existing files as these need to be replaced. Check conflicts with the `-d` flag

---
## <samp> Features </samp>
> 🏗️ Incomplete list...

- [ ] Shell script for easier setup
- [ ] Hyprland
    - [ ] Keybinds
    - [ ] Window rules
    - [ ] Documentation
- [ ] Status Bar
- [ ] Control Panel
- [ ] Fish
- [x] Alacritty <kbd>complete</kbd>
- [x] Locking & Powermenu <kbd>complete</kbd>
- [x] Wofi <kbd>complete</kbd>
- [x] Clipboard management <kbd>complete</kbd>
- [x] Screenshot utilities <kbd>complete</kbd>
- [x] Neovim <kbd>complete</kbd>
