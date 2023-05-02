#include <stdio.h>

int main(void)
{
  int i,j,end;
  int floag_not_prime;

  end = 100;

  i = 1;

  while(i <= end)
  {
    floag_not_prime = 0;
    j = 2;
    while (j < i)/*真のときは1か2。floag_not_prime(これは素数であるか)で1(違う)としてwhileを抜ける。*/
    {
        if (i % j == 0)   /*偽のときiの値までjを2からインクリメントしていきその値でi % j をしたときに0になるまでifで検証す*/
        {
          floag_not_prime = 1; 
          break;
        } 
     j = j + 1;
    }
    if(floag_not_prime == 0)
      printf("%d\n",i);
    i = i + 1;
  }
  return 0;
}
