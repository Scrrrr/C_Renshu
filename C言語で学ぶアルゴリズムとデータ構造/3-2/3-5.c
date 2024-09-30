//2分探索
#include<stdio.h>
#include<stdlib.h>

int int_cmp(const int *a, const int *b)
{
    if(*a < *b)
        return -1;
    else if(*a > *b)
        return 1;
    else
        return 0;
}

int main(void)
{
    int nx;
    int s;
    int idx;

    printf("要素数:"); scanf("%d",&nx);

    puts("昇順に入力してください。");

    int *ary = calloc(nx,sizeof(int));

    for(int i = 0; i < nx; i++)
    {
        do{
            printf("ary[%d] : ",i);
            scanf("%d",&ary[i]);
        }while(ary[i] < ary[i - 1]);
    }

    printf("探す値:");  scanf("%d",&s);

    int *p = bsearch(
        &s,
        ary,
        nx,
        sizeof(int),
        (int (*) (const void *, const void *))int_cmp
    );

    if(p == NULL)
    {
        puts("失敗");
    }else{
        printf("%dはary[%d]にあります。\n",s,(int)(p - ary));
    }

    free(ary);
}