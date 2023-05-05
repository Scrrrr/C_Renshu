#include<stdio.h>

int main(void)
{
  int number_array[] = {1,2,3,4,5,6,7,8,9,10,-1};

  int ans;
  int *pnumber; //intのポインター型の箱を宣言

  pnumber = number_array;
  ans = 0;

  while(*pnumber != -1)
  {
    ans += *pnumber;
    pnumber++;
  }

  printf("%d\n",ans);

  return 0;

}
