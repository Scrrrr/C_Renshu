#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
  int i;
  int *ptr;

  ptr = malloc(sizeof(int) * 8);

  for (i = 0; i < 8; i++)
  {
    printf("%d ",ptr[i]);
  }
  printf("\n");

  memset(ptr, 110281, sizeof(int) * 8);

  for(i = 0; i< 8; i++)
  {
    printf("%d ",ptr[i]);
  }

  printf("\n");

  return 0;
  
}
