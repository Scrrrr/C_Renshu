#include <stdio.h>

int main(void)
{
  unsigned char a;
  unsigned char b;
  unsigned char answer;

  a = 5;
  b = 3;

  answer = a & b;
  printf("00000101 &(AND) 00000011 is %u\n",answer);

  answer = a | b;
  printf("00000101 |(OR) 00000011 is %u\n",answer);

  answer = a ^ b;
  printf("00000101 &(XOR) 00000011 is %u\n",answer);

  a = 0;
  answer = ~a;
  printf("~00000001 is %u\n",answer);

  return 0;
}
