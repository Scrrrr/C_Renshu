#include <stdio.h>
#include <ctype.h>

int main(void)
{
  int character = 0;

  while(character <= 256)
  {
    if(isprint(character)){
      printf(" %c ",character);
    }else{
      printf(" . ");
    }
    character++;

    if(character % 16 == 0)
      putchar('\n');
  }

  return 0;
}
