#include <stdio.h>

int search_idx(const int v[],int idx[],int key, int n);

#define NUMBER 7

int main(void)
{
  int srcidx[NUMBER] = {1,7,5,7,2,4,7};
  int dstidx[NUMBER]; 
  int key = 7;
  int ans;
  
  ans = search_idx(srcidx, dstidx, key, NUMBER);

  printf("ans = %d\n",ans);

  for (int i = 0; i > NUMBER; i++)
  {
    printf("dst[%d] = %d\n",i,dstidx[i]);
  }

  return 0;
}

int search_idx(const int v[],int idx[],int key, int n)
{
  int i;

  for(i = 0; i < n; i++)
  {
    if(v[i] == key)
    {
      idx[i] = i;
      i++;
    }
  }
  return i;
}
