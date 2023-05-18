#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char numC[10];
  int num;
  printf("整数を入力してください：");
  fgets(numC, sizeof(numC), stdin);
  num = strtol(numC,NULL,10);

  if(num < 0)
    num = num * -1;

  printf("絶対値は%dです\n",num);

  return 0;
}
