#include<stdio.h>

int cmp(const int *a, const int *b)
{
    if(*a < *b)
    {
        return -1;
    }else if(*a > *b){
        return 1;
    }else{
        return 0;
    }
}

void *seqsearch(const void *key, //検索値
                const void *base, //配列
                size_t nmeb, //要素数
                size_t size, //要素の大きさ
                int (*compar)(const void *, const void *) //比較関数
)
{
    char *x = (char *)base;

    for(size_t i = 0; i < nmeb; i++)
    {
        if(!compar((const void *)&x[i * size],key))
            return (&x[i * size]);
    }
        return NULL;
}

int main(void)
{
    int s;
    int *p;
    int array[14] = {1,4,2,6,3,87,9,6,4,100,22,7,433,3};

    printf("検索値 : "); scanf("%d",&s);

    p = seqsearch(
        &s,
        array,
        sizeof(array) / sizeof(array[0]),
        sizeof(int),
        (int (*)(const void *, const void*))cmp
    );

	if (p == NULL)
		puts("探索に失敗しました。");
	else
		printf("%dはarray[%d]にあります。\n", s, (int)(p - array));

	return 0;
}