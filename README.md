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
First either choose a `profile` or create your own, read [here](profile_and_themes).  
After this, run:
```bash
dotter deploy -l .dotter/profiles/<profile>.toml
```
> **Note:** `--force` flag may be required if you have existing files as these need to be replaced. Check conflicts with the `-d` flag

---

## <samp><a name="profile_and_themes"></a> Profiles and themes

These dotfiles are managed by dotter. In the `.dotter` file you will find a collection of `.toml` files.

```
.dotter
├── global.toml
├── profiles
└── themes
```

Inside `profiles` each `.toml` file is a `profile` of structure:
```toml
includes = [] # These are like "imports" to configure package's variables and file mappings
packages = [] # A list of packages you want to include the dotfiles for

[files] # Table of any further file mapping changes

[varaibles] # Table of any further variable updates
```
A profile **must** include a theme `.toml` if the packages it uses have dynamic theming.

Inside `themes` each `.toml` file is a `theme` of structure:
```
[colors.variable.colors] # A mapping of names to colors of your palette
"green" = "#00ff00"

[<package>.variables] # A table of specific color variables a package needs mapped to a color in the palette
text_color = "green"
```
As you can see `theme` files just set variables on the original packages defined in `global.toml`. This is why you put them in the `includes` array in your `profile`.

Feel free to use an existing `profile` as a base and modify it to what packages are needed and what theme is wanted. Making your own theme is easy, either modify an existing one and change the colors from the palette base, or create your own base and update the usages accordingly in each of the packages variables

> *Note: Theming will change in the future, I wish to separate theme 'bases' and 'palettes`*

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
