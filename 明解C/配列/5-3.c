#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i;
  int x[7];
  char xc[7][10];

  for(i = 0; i < 7; i++){
    printf("x[%d]=",i);
    fgets(xc[i],10, stdin);
  }

  for (i = 0; i < 7; i++) {
    x[i] = atoi(xc[i]);
  }

  for (i = 0; i < 3; i++) {
    int temp = x[i];
    x[i] = x[6 - i];
    x[6 - i] = temp;
  }

  puts("反転しました\n");
  for (i = 0; i < 7; i++)
    printf("x[%d] = %d\n",i,x[i]);
  
}
