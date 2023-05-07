#include <stdio.h>

int main(void)
{
  int i;
  unsigned char *ptr;

  ptr = (unsigned char *) 0xA000;

  for (i = 0; i < 0xB00; i++)
  {
    printf("0x%02X", *ptr);
    if(((i + 1) % 15) == 0)
      printf("\n");
    ptr++;
  }
  printf("\n");

  return 0;
}
