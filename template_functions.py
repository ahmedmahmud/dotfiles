def hex_to_rgba(hex_color, transparency):
  hex_color = hex_color.strip('#')

  if len(hex_color) == 3:
    hex_color = ''.join([c * 2 for c in hex_color])

  if len(hex_color) != 6:
    raise ValueError('Invalid hex color: {}'.format(hex_color))

  r, g, b = tuple(int(hex_color[i:i+2], 16) for i in (0, 2, 4))

  return 'rgba({}, {}, {}, {})'.format(r, g, b, transparency)