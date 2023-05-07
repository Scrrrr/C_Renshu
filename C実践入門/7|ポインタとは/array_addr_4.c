#include <stdio.h>

int main(void)
{
  double double_array[2] = {0.1 , 0.2};
  double *ptr;

  ptr = double_array;
  printf("double double_array[2] = {0.1 , 0.2};\n");
  printf("double *ptr;                         \n");
  printf("ptr = double_array;                  \n");

  putchar('\n');

  printf("*(ptr + 0) = %f\n", *(ptr + 0));
  printf("*(ptr + 1) = %f\n", *(ptr + 1));

  printf("double_array[0] = %f\n",double_array[0]);
  printf("double_array[1] = %f\n",double_array[1]);

  printf("ptr[0] = %f\n",ptr[0]);
  printf("ptr[1] = %f\n",ptr[1]);
  return 0;
}
