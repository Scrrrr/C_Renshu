#include<stdio.h>

int main(void)
{
  int n;

  n = 1;
  printf("n = n + ++n + of N = %d\n", n = n + ++n + n);
  printf("n=%d\n",n);

  n = 1;
  printf("n = n + n++ + of N = %d\n", n = n + n++ + n);
  printf("n=%d\n",n);
  return 0;
}
