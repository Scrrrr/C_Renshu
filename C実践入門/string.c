#include <stdio.h>
#include <string.h>

int main(void)
{

  char hello_1[12] = "hello wrold!";
  char hello_2[2] = "";

  printf("hello_2 = %s\n",hello_2);

  strcpy(hello_2, hello_1);

  printf("hello_2 = %s\n",hello_2);
}
