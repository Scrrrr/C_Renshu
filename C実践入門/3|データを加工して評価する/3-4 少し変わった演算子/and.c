#include <stdio.h>

int main(void)
{
  unsigned char a;
  unsigned char b;

  a = 'Y';
  b = '2';

  printf("%c is 0x%x\n", a,a);

  a = 192;
  b = 255;
  printf("first octet is %u\n",a & b);

  a = 168;
  b = 255;
  printf("second octet is %u\n",a & b);

  a = 0;
  b = 255;
  printf("third octet is %u\n",a & b);

  a = 0;
  b = 1;
  printf("fourth octet is %u\n",a & b);
}
