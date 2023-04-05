let hex = params[0];

// Remove prefix # if exists
if hex[0] == "#" {
    hex = hex.sub_string(1)
}

// If three digigts, double
if hex.len == 3 {
    hex = "" + hex[0] + hex[0] + hex[1] + hex[1] + hex[2] + hex[2];
}

// Hex must be 6 digits now or invalid
if hex.len != 6 {
    throw `${hex} is not a valid hex color`
}

let r = parse_int(hex.sub_string(0, 2), 16);
let g = parse_int(hex.sub_string(2, 2), 16);
let b = parse_int(hex.sub_string(4, 2), 16);

`rgb(${r}, ${g}, ${b})`
