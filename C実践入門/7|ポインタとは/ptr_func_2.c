#include <stdio.h>

//でーたを実行する
//　通常のコンピュータは、メモリに存在する命令とデータを区別して動くようなことはしません。
//つまり、メモリに存在する「データ」、たとえば"hello world\n"を「実行」させることもできます。
//逆に、実行すべき「命令」をデータとして表示したりすることもできます。
//
//"hello world\n"はCPUに解釈できる「命令」ではないので、当然のごとく異常終了します。しかし、
//逆に考えるとCPUが解釈できる命令を送る込むと異常終了せずに「正しく不正な動き」をさせることが
//できてしまいます。そうして、システムのパスワードが盗まれたりすることもあります。
//対策するためには、とにかくポインタは慎重に扱って、配列は確保した要素を超えないように注意しましょう。

void func(void);

void func(void)
{
  printf("This program is..");
}

int main(int argc, char *argv[])
{
  char one_string[]= "printf(""h3ll0?\n"");";
  void (*ptr_func) (void);

  ptr_func = (void (*) (void)) one_string;

  ptr_func();

  return 0;
}
