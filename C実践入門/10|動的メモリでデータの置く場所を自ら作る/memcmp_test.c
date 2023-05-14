#include <stdio.h>
#include <string.h>

int main(void)
{
  int a,b;
  double c,d;

  a = 998;
  b = 1000;
  c = 0.30000000000000004;
  d = 0.3;

  if(memcmp(&a,&b,sizeof(int)) == 0)
  {
    printf("a and b are the same\n");
  }else{
    printf("retunr %d\n",memcmp(&a,&b,sizeof(int)));
  }

  if(memcmp(&c,&d,sizeof(double)) == 0)
  {
    printf("c and d are the same\n");
  }else{
    printf("retunr %d\n",memcmp(&c,&d,sizeof(double)));
  }

  return 0;
}
