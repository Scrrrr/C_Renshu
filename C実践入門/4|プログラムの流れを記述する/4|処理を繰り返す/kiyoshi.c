#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  srand(time(NULL));

  int random;
  int count = 0;

  do
  {
    random = rand() % 1 + 2;

    if (random == 0)
    {
      printf("ずん\n");
      count++;
    }
    if(count == 3)
      printf("どこ\n");
  }while(count == 3);
     printf("たけし！\n");
}
