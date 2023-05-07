#include <stdio.h>

/*
* 関数ポインタ
* 変数は＆で、場所（アドレス）を取得したりすることができました。
* 同じくメモリ上に存在する関数については、どうなのでしょう。
* 実は、関数のアドレスを格納するためのポインタ変数というものがあって、
* それになら自由に代入したり実行したりすることができます。
* */

int sum(int , int);
int sub(int , int);
int mul(int , int);
int div(int , int);

int sum(int a, int b)
{
  int return_value;

  return_value = a + b;

  return return_value;
}

int sub(int a, int b)
{
  int return_value;

  return_value = a - b;

  return return_value;
}

int mul(int a, int b)
{
  int return_value;

  return_value = a * b;

  return return_value;
}

int div(int a, int b)
{
  int return_value;

  return_value = a / b;

  return return_value;
}

int main(void)
{
  int num1,num2;
  int ans;
  int (*ptr_function)(int , int); //これが関数ポインタの宣言

  num1 = 1;
  num2 = 2;

  ptr_function = div;

  ans = ptr_function(num1, num2);
  printf("answer = %d\n",ans);

  return 0;
}


