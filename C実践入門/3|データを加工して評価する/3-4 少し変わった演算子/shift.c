#include <stdio.h>

int main(void)
{
  unsigned int n;

  n = 32768;

  printf("one left shift %u\n", n << 1);
  printf("two left shift %u\n", n << 2);

  printf("one right shift %u\n", n >> 2);
  printf("two right shift %u\n", n >> 2);

  /*
   *ビット演算の注意点
   *　ビット演算は、整数系のデータ型にのみ利用できます。floatなどの浮働小数点型には利用できません
   *　なぜかというと、有働小数点型のデータ型はメモリを符号部、指数部、仮数部と分けて利用しているため、
   *　単純な数値としての１を格納しても２進数での１とはならないためです。
  */
}
