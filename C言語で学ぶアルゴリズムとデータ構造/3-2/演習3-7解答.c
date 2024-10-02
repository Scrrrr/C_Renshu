/* 演習3-7　bsearch関数と同じ形式の線形探索関数 */

#include <stdio.h>
#include <stdlib.h>

/*--- baseが指す要素の大きさがsizeで要素数がnmembの配列からkeyと一致する要素を
	  比較関数comparを用いて線形探索 ---*/
void *seqsearch(const void *key, 
                const void *base,
                size_t nmemb,
                size_t size,
			    int (*compar)(const void *, const void *)
)
{
	size_t i;
	char   *x = (char *)base;

	for (i = 0; i < nmemb; i++)
		if (!compar((const void *)&x[i * size], key))
			return (&x[i * size]);
	return NULL;							/* 探索失敗 */
}

/*--- 整数を比較する関数 ---*/
int int_cmp(const int *a, const int *b)
{
	if (*a < *b)
		return -1;
	else if (*a > *b)
		return 1;
	else
		return 0;
}

int main(void)
{
	int i, nx, ky;
	int *x;		/* 配列の先頭要素へのポインタ */
	int *p;		/* 探索された要素へのポインタ */

	puts("seqsearch関数による探索");
	printf("要素数 : ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));	/* 要素数nxのint型配列を生成 */

	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	printf("探す値 : ");
	scanf("%d", &ky);

	p = seqsearch(
				 &ky,							/* 探索値へのポインタ */
				 x,								/* 配列 */
				 nx,								/* 要素数 */
				 sizeof(int),					/* 要素の大きさ */
				 (int (*)(const void *, const void *))int_cmp	/* 比較関数 */
			    );

	if (p == NULL)
		puts("探索に失敗しました。");
	else
		printf("%dはx[%d]にあります。\n", ky, (int)(p - x));

	free(x);	/* 配列を解放 */

	return 0;
}
