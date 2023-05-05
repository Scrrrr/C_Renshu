#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char *argv[])
{
  double x, y , insect_cnt;
  time_t t1,t2;
  int i;

  insect_cnt = 0.0;
  i = 0;

  srand(time(NULL));

  t1 =  time(NULL);

  while(1 < 1000)
  {
    x = (double) rand() / RAND_MAX;
    y = (double) rand() / RAND_MAX;

    if(x * x + y * y < 1.0)
      insect_cnt = insect_cnt + 1.0;

  i = i + 1;
  }

  t2 = time(NULL);

  printf("%f\n",insect_cnt / i * 4.0);
  printf("process time = %ld sec\n",t2 - t1);

  return 0;
}
