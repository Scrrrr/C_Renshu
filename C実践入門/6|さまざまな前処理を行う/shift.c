#include<stdio.h>

int main(void)
{
  int a = 762;
  int b = 973;

  printf("+---a = %d b = %d---+\n",a,b);

  a ^= b; //aとbで排他的論理和したものをaに代入する
          //a = 3 , b = 2

  printf("+---a = %d b = %d---+\n",a,b);

  b ^= a; //aとbで排他的論理和したものをbに代入する
          //a = 3 , b = 1

  printf("+---a = %d b = %d---+\n",a,b);

  a ^= b; //aとbで排他的論理和したものをaに代入する
          //a = 2 , b = 1

  printf("+---a = %d b = %d---+\n",a,b);

  return 0;

}

