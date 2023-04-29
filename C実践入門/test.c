#include<stdio.h>

int main(void)
{
  int a,b;
  int ans;

  a = 1;
  b = 2;
  ans = a + b;
  printf("%d + %d = %d\n",a,b,ans);

  a = 4;
  b = 2;
  ans = a - b;
  printf("%d - %d = %d\n",a,b,ans);

  a = 9;
  b = 9;
  ans = a * b;
  printf("%d × %d = %d\n",a,b,ans);

  a = 9;
  b = 3;
  ans = a / b;
  printf("%d / %d = %d\n",a,b,ans);

  a = 9;
  b = 2;
  ans = a % b;
  printf("%d %% %d = %d\n",a,b,ans);

  return 0;

}
