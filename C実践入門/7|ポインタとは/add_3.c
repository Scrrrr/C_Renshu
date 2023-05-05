#include<stdio.h>

int main(void)
{
  int number_2;
  int *pnumber_2;

  number_2 = 1;
  pnumber_2 = &number_2;

  printf("address of number_2 is %p\n",pnumber_2);

  printf("number_2のポインター is %d\n",*pnumber_2);
  printf("number_2のポインター + 1 is %d\n",*pnumber_2 + 1);

  return 0;
}
