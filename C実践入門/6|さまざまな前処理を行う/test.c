#include<stdio.h>

int main(void)
{
  printf("%p\n",&"hell");
  printf("%p\n",&"o wo");
  printf("%p\n",&"rld!");

  int hello[] = {0x55d751e63004,0x55d751e6300d,0x55d751e63012};
  
  printf("%s",(char *)hello);
}
