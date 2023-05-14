#include <stdio.h>
#include <string.h>

int main(void)
{
  int a,b;
  double c,d;
  char string_1[256] = "test";
  char string_2[256];
  int array_1[4] = {1, 2, 3, 4};
  int array_2[4];

  a = 1000;
  c = 3.14;


  memcpy(&b, &a, 1024);
  memcpy(&d, &c, sizeof(double));
  memcpy(string_2,string_1,sizeof(string_2));

  memcpy(array_2,array_1,sizeof(array_2));

  printf("%d, %f, %s, %d %d %d %d\n",
         b, d, string_2, array_2[0], 
         array_2[1], array_2[2], array_2[3]);

  return 0;
}
