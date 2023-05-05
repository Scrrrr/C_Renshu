#include<stdio.h>

int main(void)
{
  char one_string[16]; 
  int length;

  fgets(one_string,sizeof(one_string),stdin);

  length = 0;
  while(one_string[length] != '\n')
    length = length + 1;

  printf("lenght is %d\n",length);

}
