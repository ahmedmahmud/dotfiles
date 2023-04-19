// let params = [
//     "palette.light_red",
//     #{
//         light_red: "lighten palette.red 10%",
//         red: "#ff0000"
//     }
// ];

fn resolve_color(color, palette, accessed_keys) {
    if color[0] == "#" { return color; }

    if color.starts_with("palette.") {
        let key = color.sub_string(8);
        if accessed_keys[key] == true {
            throw "Infinite recursion found";
        }
        accessed_keys[key] = true;

        let color = palette[key];
        return process_color(color, palette, accessed_keys);
    }
}

fn process_color(input, palette, accessed_keys) {
    let v = input.split(" ");

    if (v.len() == 1) {
        let col = v[0];
        return resolve_color(col, palette, accessed_keys);
    }

    let function = v[0];

    switch function {
        "lighten" => {
            let color = resolve_color(v[1], palette, accessed_keys);
            let amount = v[2];
            if amount[-1] == "%" {
                amount.pop();
            }
        
            amount = parse_int(amount);
            
            let hashless = color.sub_string(1, 6);
            let num = parse_int(hashless, 16);
            
            let r = (num >> 16) + amount;
            
            if r > 255 { r = 255; }
            if r < 0 { r = 0; }
            
            let b = ((num >> 8) & 0x00ff) + amount;
            
            if b > 255 { b = 255; }
            if b < 0 { b = 0; }
            
            let g = (num & 0x0000ff) + amount;
            
            if g > 255 { g = 255; }
            if g < 0 { g = 0; }
            
            return `#${(g | (b << 8) | (r << 16)).to_hex()}`;
        
        }
        _ => {
            throw "Unknown function."
        }
    }
}

let input = params[0];
let palette = params[1];

let accessed_keys = #{};
process_color(input, palette, accessed_keys)