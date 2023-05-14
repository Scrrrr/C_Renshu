#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  char *one_string;

  one_string = malloc(0xffffffffffffffff);
  if(one_string == NULL)
  {
    printf("Memory Error\n");
  }

  printf("one_string=%p\n",one_string);
  free(one_string);

  one_string = malloc(14);
  if(one_string == NULL){
    printf("Memory allocation error!\n");
    return -1;
  }

  printf("one_string=%p\n",one_string);

  strncpy(one_string, "hello, world\n", 14 -1);
  one_string[14 - 1] = '\0';

  printf("%s",one_string);

  printf("one_string=%p\n",one_string);
  free(one_string);
  printf("one_string=%p\n",one_string);

  strncpy(one_string, "hello, world\n", 14 -1);
  one_string[14 - 1] = '\0';
  int *ptri = malloc(sizeof(int));
  double *ptrd = malloc(sizeof(double));
  *ptrd = 23.333;
  *ptri = 233;
  printf("%s",one_string);

  return 0;
}
