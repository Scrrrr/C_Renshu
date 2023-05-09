#include<stdio.h>

struct TagBitField
{
  unsigned on_off: 1;
  unsigned half_byte: 4;
};

int main(void)
{
  struct TagBitField BitField;

  BitField.on_off = 1;
  BitField.half_byte = 15;

  printf("bit_field.on_off = %u\n",BitField.on_off);
  printf("bit_field.half_byte = %u\n",BitField.half_byte);

  BitField.on_off = 2;
  BitField.half_byte = 16;

  printf("bit_field.on_off = %u\n",BitField.on_off);
  printf("bit_field.half_byte = %u\n",BitField.half_byte);

  return 0;
  
}
