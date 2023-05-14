#include <stdlib.h>
#include <stdio.h>

typedef int * intnump ;

int main(int argc, char *argv[])
{

  intnump a,b;

  a = malloc(sizeof(int));
  *a = 1000;

  b = malloc(sizeof(int));

  *b = *a;

  *a = 2000;
  printf("%d\n",*b);
  printf("%d\n",*a);

  return 0;
}
