#include<stdio.h>

int main(void)
{
  int array[] = {1000,2000,3000,4000};

  int *parray;
  
  parray = &array[0];

  printf("%d\n",*parray);

  parray = &array[1];

  printf("%d\n",*parray);

  parray = &array[2];

  printf("%d\n",*parray);

  parray = &array[3];

  printf("%d\n",*parray);

  return 0;
}
