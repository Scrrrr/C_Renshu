#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
  double x,y,insect_cnt;
  int i;
  int j;

  insect_cnt = 0.0;

  srand(time(NULL)); //round関数を使うときのおまじない

  for(i = 0; i < 10; i++)
  {
  //  x = (double) rand() / RAND_MAX;
  //  y = (double) rand() / RAND_MAX;
    j = (double) rand() / RAND_MAX * 10;

    if (x * x + y * y < 1.0) 
      insect_cnt = insect_cnt + 1.0; 
  printf("%d\n",j);
  }
 // printf("%f\n",insect_cnt / i * 4.0);

  return 0;
}
