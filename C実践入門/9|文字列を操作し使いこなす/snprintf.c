#include <stdio.h>

int main(void)
{
  char msg[256];
  char hello[] = "Hello, World!";
  char title[] = "Mr.";
  char space[] = " ";
  char name[] = "Taro";

  snprintf(msg, sizeof(msg),"%s%s%s%s\n",hello,space,title,name);

  printf("%s",msg);
}
