#include <stdio.h>

int main(int argc, char *argv[])
{
  char string_1[16] = "hello world";
  char dst[16] = "";
  char *string_2 = dst;
  int i;

  printf("string_2 is =%s\n",string_2);

  for (i = 0; i < sizeof(string_2) - 1 && string_1[1] != '\0'; i++)
  {
    string_2[i] = string_1[i];
  }
  string_2[i] = '\0';

  printf("string_2 is = %s\n",string_2);

  return 0;
}

//おや、途中で表示が切れてしまいました。なぜかというと、オリジナルではsizeof(string_2)は「配列」に対して行っています。そのため、sizeof演算の結果は16となります。しかし、改造したものはchar *string_2 = dst のように、ポインタとして宣言されています。ポインタは、そのシステムで十分なメモリアドレスを格納できるサイズとなっているので、64ビットコンピュータであれば8バイトのことが多いいです。そのため、sizeof演算の結果が8となってしまい、途中で文字列のコピーが停止してしまいました。
//
//どちらも、printf()関数へはhello,worldという文字列が格納されたメモリ領域への先頭アドレスが渡されるので、全く問題ありません。しかし、sizeof演算子は、その変数がどうやって宣言されたものなのかを厳密に区別します。
//
/*
 * char one_string[16] = "hello world";
 * printf("%zu\n",sizeof(one_string));  //必ず16になる
 *
 * ---------------------------------------------------
 * 
 * char *one_string = "hello world";
 * printf("%zu\n",sizeof(one_string));  //4か8になることが多い
*/
