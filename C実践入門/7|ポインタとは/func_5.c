#include <stdio.h>

int sum(int * , int * , int *);

int sum(int *a , int *b , int *ans)
{
  if(ans == NULL)
    return -1;

  *ans = *a + *b;

  return 0;
}

int main(void)
{
  int num1,num2;
  int *ans;
  int answer;

  num1 = 1;
  num2 = 2;
  ans = NULL;

  if(sum(&num1,&num2,ans) != 0)
    printf("error\n");

  printf("The answer is ...\n");
  printf("%d\n",*ans);

  return 0;

  
}
