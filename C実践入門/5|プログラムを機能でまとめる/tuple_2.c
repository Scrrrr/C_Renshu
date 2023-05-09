#include<stdio.h>
#define MAX 10

int create_tuple(int *tuple)
{
  int i,j;
  if(tuple == NULL){
    return -1;
  }

  for(i = 0; i < MAX; i++)
  {
    for(j = 0; j < MAX; j++)
    {
      tuple[i][j] = (i + 1) * (j + 1);
    }
  }

  return 0;
}

int main(void)
{
  int i,j;
  int tuple[MAX][MAX] = {{0}};

  create_tuple(tuple);

  for(i = 0; i < MAX; i++){
    for(j = 0; j < MAX; j++){
      printf("% 4d ",tuple[i][j]);
    }
    putchar('\n');
  }
  return 0;
}
