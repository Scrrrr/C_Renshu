#include<stdio.h>

#define NUM 1

int main(void)
{
  int a;

  a = NUM;
  printf("a++ is %d\n",a++);

  a = NUM;
  printf("++a is %d\n",++a);

  a = NUM;
  printf("a-- is %d\n",a--);

  a = NUM;
  printf("--a is %d\n",--a);

  return 0;

}
