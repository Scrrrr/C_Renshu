#include <stdio.h>

int main(int argc, char *argv[])
{
  int number_array[] = {1,2,3,4,5,6,7,8,9,10,-1};

  int ans;
  int *pnumber;

  pnumber = number_array;
  ans = 0;

  while (*pnumber != -1) {
    ans += *pnumber;
    pnumber++;
    // printf("pnumber is %p\n",pnumber);
    // pnumber++ でint型のポインター変数なので4バイトごとにアドレスが増えていく.
  }

  printf("answer:%d\n",ans);


  return 0;
}
