#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  char *one_string, *new_string;

  one_string = malloc(14); //14バイト確保

  if(one_string == NULL)
  {
    printf("Memmory allocation error!\n");
    return -1;
  }

  printf("one_string=%p\n",one_string);

  strncpy(one_string,"hello,world\n",14 - 1); //文字列にコピー
  one_string[14 - 1] = '\0';
  
  printf("%s",one_string);

  new_string = realloc(one_string,32);
  if(new_string == NULL)
  {
    printf("Memory allocation error!\n");
    free(one_string);
    return -1;
  }

  printf("new_string=%p\n",new_string);
  //one_string = new_string;

  strncpy(one_string,"hello, world\nHELLO,WORLD\n", 32 -1);
  one_string[32 - 1] = '\0';

  printf("%s",one_string);

  free(one_string);

  return 0;
}
