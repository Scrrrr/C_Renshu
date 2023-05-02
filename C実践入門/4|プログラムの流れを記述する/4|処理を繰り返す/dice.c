#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  int c;

  srand(time(NULL));

  do
  {
    printf("%d\n",rand() % 6 + 1);
    c = getchar();
  }while(c != 'q');

  return 0;
}
