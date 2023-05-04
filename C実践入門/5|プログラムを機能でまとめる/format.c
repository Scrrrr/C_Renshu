#include <stdio.h>

int main(int argc, char *argv[])
{

  printf("|%-4d|%-4d|\n|%-4d|%-4d|\n",1,2,1,2);


  printf("%-4d\n",10);
  printf("%+d\n",-10);

  printf("%hhu\n",255);
  printf("%hhu\n",256);
  printf("%hhu\n",257);

  printf("%e\n",0.1);
  printf("%f\n",0.1);

  return 0;
}
