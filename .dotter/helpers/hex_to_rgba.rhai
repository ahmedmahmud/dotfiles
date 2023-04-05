let hex = params[0];
let transparency = params[1];

// Verify transparency
if transparency > 1 || transparency < 0 {
    throw `${transparency} is not valid. It must be between 0 - 1`
}

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

`rgba(${r}, ${g}, ${b}, ${transparency})`
