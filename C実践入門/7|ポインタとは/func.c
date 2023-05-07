#include <stdio.h>

int *sum(int *, int *);

int *sum(int *a , int *b)
{
  int ans;
  ans = *a + *b;

  return &ans;
}


int main(void)
{
  int num[2];
  int *ans;

  num[0] = 1;
  *(num + 1) = 2;

  ans = sum(num,&num[1]);

  printf("%d\n",*ans);
}
