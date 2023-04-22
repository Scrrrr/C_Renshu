#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char num_char[10];
  int num;

  printf("整数を入力してください:"); fgets(num_char,10,stdin);

  num = atoi(num_char);

  if (num < 0) {
    num = -num;
  }

  printf("絶対値は%dです\n",num);

}
