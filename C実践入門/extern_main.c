#include<stdio.h>

extern int gnum;

int
main(int argc, char *argv[])
{
  printf("global_number = %d\n",gnum);

  return 0;
}
