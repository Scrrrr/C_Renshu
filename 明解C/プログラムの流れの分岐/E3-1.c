#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char ac[10], bc[10];
  int a,b;

  puts("２つの整数を入力してください");
  printf("整数A:"); fgets(ac,sizeof(ac),stdin);
  printf("整数B:"); fgets(bc,sizeof(bc),stdin);

  a = strtol(ac, NULL , 10);
  b = strtol(bc, NULL , 10);

  if(a % b == 0){
    puts("BはAの約数です");
  }else{
    puts("BはAの約数ではありません");
  }

  return 0;
}
