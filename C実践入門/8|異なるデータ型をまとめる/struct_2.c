#include <stdio.h>
/* 配列は大きくなるのでポインタでしか渡せませんでしたが、
 * メンバの宣言次第で大きくなる構造体はどうなのるのでしょうか
 * 実は、普通の変数と同様で、コピーして渡す方法とポインタで渡す方法両方
 * を使うことができるのです。配列は絶対にポインタ渡しでしかできないので、大きな違いです。
*/

struct tag_coord
{
  double x;
  double y;
};

void print_coordinates(struct tag_coord);

void print_coordinates(struct tag_coord c)
{
  printf("c.x = %f\n",c.x);
  printf("c.y = %f\n",c.y);

  c.x = 12345.00;
  c.y = 54321.00;
}

int main(void)
{
  struct tag_coord coord;

  coord.x = 1.00;
  coord.y = 2.00;

  print_coordinates(coord);

  printf("coord.x = %f\n",coord.x);
  printf("coord.y = %f\n",coord.y);

  return 0;
}

/*
 * print_coordinates()関数で、値を画面に表示した後、別の数値を構造体のメンバ変数に代入して
 * いますが、main()関数で再度表示しても、値は最初と変わりません。これはまぎれもなく、構造体が
 * 関数に渡るときにコピーされたからです。
 * 　また、構造体は戻り値もすこし特殊です。配列は、関数に渡すときも、関数からreturn で戻すときも
 * ポインタにしか対応していません。しかし、構造体は値そのものをコピーして戻す機能があります。
 * 　配列を返したい関数は、char *function(void)のように、必ずポインタが戻る関数として宣言します。
 * char[] function(void) のような配列の実体が関数からコピーされてくるようには宣言できませんし、
 * そのような機能はありません。そのため2-4節のリスト2-7のように、呼び出した先の関数上のローカル変数が
 * 破壊されると、おかしな結果となってしまいます。
 *
 * しかし、構造体では、実体そのものを返すことができます。実験してみましょう→struct_3.c
 *
 *
 * */
