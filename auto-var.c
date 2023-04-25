#include<stdio.h>

char *func(void)
{
	static char one_string[14] = "hello, world\n";
	/*
	 * 実際に実行してみると、予想とは違う結果になることがわかります。これはなぜでしょう。 
	 * func()関数の中で宣言した、配列one_stringはスタック上に確保されるものなので
	 * func()関数の処理を終了した時点で、ほかの処理に使われて内容が破棄されます。
	 * 　では、期待したようにfunc()関数、それからmain()関数両方のprintf()がきれいに表示
	 * できるようにするためにはどのようにすればいいのでしょうか。
	 * そのためには、スタックとは別の場所に変数を確保するような宣言を行う必要があります。
	 * 　関数の中で、「静的変数」として変数を宣言すると、スタックとは別の場所に確保されます。
	 * 静的変数は、次のように宣言します。
	 *			static データ型 変数名;
	 *			static データ型 変数名 = 初期値;
	 */

	printf("from func: %s", one_string);

	return one_string;
}

int main(void)
{
	printf("from main: %s", func());

	return 0;
}