#include<stdio.h>
#include"functions.h"

int main(void)
{
  int num1;
  int num2;
  int ans;

  num1 = 10;
  num2 = 10;

  ans = sum(num1, num2);
  printf("answer = %d\n",ans);

  ans = sub(num1, num2);
  printf("answer = %d\n",ans);

  ans = mul(num1, num2);
  printf("answer = %d\n",ans);

  ans = div(num1, num2);
  printf("answer = %d\n",ans);
  return 0;
}
