#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char a[10],b[10];
  int ai,bi;

  printf("２つの整数を入力してください\n");
  printf("整数A:"); fgets(a,10,stdin);
  printf("整数B:"); fgets(b,10,stdin);

  ai = atoi(a);
  bi = atoi(b);

  if (ai % bi == 0) {
    printf("BはAの約数です。\n");
  }else
    printf("BはAの約数ではありません。\n");

  return 0;
}
