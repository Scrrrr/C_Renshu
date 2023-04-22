#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int vi[5];
  int i;

  for (i = 0; i < 5; i++) 
    vi[i] = i;
  
  for (i = 0; i < 5; i++) 
    printf("v[%d]=%d\n",i,vi[i]);
  
  return 0;
}
