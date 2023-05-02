#include <stdio.h>

int main(void)
{
  int a;

  a = -1;

  printf("absolute value is %d\n", a > 0 ? a : -a);

  return 0;
}
