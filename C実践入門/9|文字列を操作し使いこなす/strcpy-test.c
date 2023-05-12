#include <stdio.h>
#include <string.h>

int main(void)
{
  char string_1[16] = "hello world";
  char string_2[2] = "";

  printf("string_2 is = %s\n",string_2);

  strcpy(NULL,string_1);

  printf("string_2 is = %s\n",string_2);

  return 0;
}
