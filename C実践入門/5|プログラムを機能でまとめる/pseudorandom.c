#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  int c;

  srand(0);

  do
  {
    printf("%d\n",rand() % 6 + 1);
    c = getchar();
  }while(c != 'q');

  return 0;
}
