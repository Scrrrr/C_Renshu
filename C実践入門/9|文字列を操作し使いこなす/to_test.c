#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char hello[16] = "hello world";
  char HELLO[16] = "";
  char *dst ,*src;

  dst = HELLO;
  src = hello;


  while(*dst == '\0')
  {
    *dst = toupper(*src); 
    dst++;
    src++;
  }

  *dst = '\0';

  printf("%s\n",HELLO);

  return 0;

}
