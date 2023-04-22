#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char Ac[10],Bc[10];
  int A,B;

  printf("２つの整数を入力してください。\n");
  printf("整数A:"); fgets(Ac, 10, stdin);
  printf("整数B:"); fgets(Bc, 10, stdin);

  A = atoi(Ac);
  B = atoi(Bc);

  if (A < B) 
    printf("BはAより大きいです。\n");
  else   
    printf("AはBより大きいです。\n");
}
