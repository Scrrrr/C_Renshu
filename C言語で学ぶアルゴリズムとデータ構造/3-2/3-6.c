#include<stdio.h>
#include<stdlib.h>

int int_cmpr(const int *a, const int *b)
{
   if(*a < *b) 
    {
        return 1;
    }else if(*a > *b){
        return -1;
    }else{
        return 0;
    }
}

int main(void)
{
    int nx;
    int s;

    printf("bsearch関数による探索");
    printf("要素数:");  search("%d",&nx);
    puts("降順に入力してください。");

    int *ary = calloc(nx, sizeof(int));

    for(int i = 0; i < nx; i++)
    {
        do
        {
            printf("ary[%d] : ",i);
            scanf("%d",ary[i]);
        } while (ary[i] > ary[i - 1]); //ひとつ前よりも大きければ再入力
    }

    printf("探す値 : "); scanf("%d",&s);

    int *p = bsearch(
        &s,
        ary,
        nx,
        sizeof(int),
        (int (*)(const void *, const void *))int_cmpr
    );

    if(p == NULL)
    {
        puts("探索に失敗しました。");
    }else{
        printf("%dはx[%d]にあります。",s,(int)(p - ary));
    }

}