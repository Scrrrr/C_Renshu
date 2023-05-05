#ifdef TEST

#if TEST == 0
#include<stdio.h>

int main(void)
{
  printf("hello, world\n");

  return 0;
}

#ifdef TEST
#else
#include<stdio.h>
int main(void)
{
  printf("h3ll0 w0rld\n");

  return 0;
}
#endif


/* このdefineは,もう1つ別な使い方もできます。
 * そのための命令がifです。if命令を使うと、defineされた値によって、処理ではなくソースコード自体を分岐させる
 * ことができます。
 *
 * するとdefine TEST が1のとき、if TEST == 1以下のelse endifまでが条件分岐します。
*/
