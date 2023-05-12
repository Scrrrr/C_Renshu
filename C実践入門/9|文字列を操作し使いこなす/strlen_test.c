#include <stdio.h>
#include <string.h>

int main(void)
{
  char one_string[16] = "hello world";
  size_t length;

  length = strlen(one_string);

  printf("length is %zu\n",length);

  return 0;
}
