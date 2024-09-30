#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int na;

    printf("要素数：");
    scanf("%d",&na);

    int *a = calloc(na,sizeof(int));

    if(a == NULL)
    {
        puts("記憶域の確保に失敗しました");
    }else{
        printf("%d個の整数を入力してください\n",na);
        for(int i = 0; i < na; i++)
        {
            printf("a[%d] :", i);
            scanf("%d",&a[i]);
        }

        printf("各要素は次の通りです。\n");
        for(int i = 0; i < na; i++)
        {
            printf("a[%d] = %d\n",i, a[i]);
        }

        free(a);
    }

    printf("ところでa[0]は%dですよね？\n",a[0]);
}