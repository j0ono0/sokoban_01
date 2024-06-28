/* GIMP RGB C-Source image dump (plr.c) */

static const struct {
  unsigned int 	 width;
  unsigned int 	 height;
  unsigned int 	 bytes_per_pixel; /* 2:RGB16, 3:RGB, 4:RGBA */ 
  unsigned char	 pixel_data[16 * 16 * 2 + 1];
} sprite_plr = {
  16, 16, 2,
  "\340\007\340\007\340\007\340\007\004\000\004\000\004\000\004\000\004\000\004\000\340\007\340\007\340\007\340\007"
  "\340\007\340\007\340\007\340\007\340\007\004\000\004\000\004\000\004\000\004\000\004\000\004\000\004\000\004\000\340\007"
  "\340\007\340\007\340\007\340\007\340\007\004\000\004\000\004\000\004\000\004\000\004\000\004\000\004\000\004\000\004\000\340"
  "\007\340\007\340\007\340\007\340\007\340\007\004\000\004\000\004\000\004\000\004\000\004\000\035\377\035\377\035"
  "\377\035\377\004\000\340\007\340\007\340\007\340\007\340\007\004\000\004\000\004\000\035\377\177\000\035"
  "\377\035\377\035\377?\\\035\377\004\000\340\007\340\007\340\007\340\007\340\007\004\000\004\000\004"
  "\000\035\377\035\377\035\377\035\377\377\377\035\377\035\377\340\007\340\007\340\007\340"
  "\007\340\007\340\007\004\000\004\000\035\377\035\377\035\377\035\377\035\377\035\377\035\377\035"
  "\377\340\007\340\007\340\007\340\007\340\007\340\007\340\007\004\000\035\377\035\377\035\377R"
  "\373R\373R\373\035\377?\\\004\000\340\007\340\007\340\007\340\007\340\007\177\000\177\000\177"
  "\000\035\377\035\377\035\377\035\377\035\377\035\377\177\000?\\\004\000\340\007\340\007\340"
  "\007\004\000\177\000?\\\223\000\223\000\035\377\035\377\035\377\035\377?\\\177\000\177\000?\\"
  "\004\000\340\007\340\007\004\000\177\000?\\\223\000\223\000\223\000\223\000\223\000\223\000?\\\177"
  "\000\177\000?\\\004\000\340\007\340\007\004\000\177\000?\\\223\000\177\000\177\000\177\000\177\000?\\"
  "?\\\177\000\004\000?\\\004\000\340\007\340\007\004\000\035\377\035\377\223\000\223\000\177\000\177"
  "\000\177\000?\\?\\\177\000\004\000\035\377\004\000\340\007\340\007\004\000\004\000\004\000\004\000\004\000\004\000\004"
  "\000\004\000\004\000\004\000\004\000\004\000\004\000\340\007\340\007\340\007\340\007\340\007\340\007\004\000\004\000\340"
  "\007\340\007\340\007\004\000\004\000\340\007\340\007\340\007\340\007\340\007\340\007\340\007\004\000\004\000"
  "\004\000\004\000\340\007\340\007\340\007\004\000\004\000\004\000\004\000\340\007\340\007\340\007",
};

