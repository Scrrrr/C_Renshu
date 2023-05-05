#include<stdio.h>

#define SWAP(a,b) {a ^= b; b ^= a; a ^= b;}

int main(void)
{
  int a = 1;
  int b = 12;

  printf("%2s a = %d, b = %d\n","before",a,b);
    SWAP(a,b);
  printf("%2s a = %d, b = %d\n","after",a,b);

}
