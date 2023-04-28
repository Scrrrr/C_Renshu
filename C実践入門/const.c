#include<stdio.h>

int
main(void argc, char *argv[])
{
  const char character = 'A';
  const int  number = 1;

  printf("character is = %c",character);
  printf("number is = %s",number);

  character = 'B';
  number = 2;

  return 0;
}

/*
 * extern指定子に似たものにconst指定子というものがあります。
 * これらは「記憶クラス指定子」と言います。
 * constは、初期化した値から一切変更できなる拡張子です。
 * あらかじめ決められた値を、プログラム中で変更したくない場合に利用します。
 * constが指定された変数を、初期値以外から変更しようとするとコンパイルエラーになります。
 *
 *
