#include <stdio.h>

int main(void)
{
  int i,j,end;
  int floag_not_prime;

  end = 100;

  for (int i = 1; i <= end; i++) 
  {
    floag_not_prime = 0;

    for (j = 2; j < i; j++)
    {
        if (i % j == 0)   /*偽のときiの値までjを2からインクリメントしていきその値でi % j をしたときに0になるまでifで検証す*/
        {
          floag_not_prime = 1; 
          break;
        } 
    }
    if (i == 1) 
      continue; 
    if(floag_not_prime == 0)
      printf("%d\n",i);
  }

  return 0;
}
