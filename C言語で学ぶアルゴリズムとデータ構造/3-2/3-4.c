//2分探索
#include<stdio.h>
#include<stdlib.h>

int search(const int a[], int n, int key) //配列,要素数,検索値
{
    int pl = 0;     //探索範囲の先頭の添え字
    int pr = n -1;  //探索範囲の末尾の添え字
    int pc;

    do{
        pc = (pl + pr) / 2;

        if(a[pc] == key)
        {
            return pc;
        }else if(a[pc] < key){
            pl = pc + 1;
        }else{
            pr = pc - 1;
        }
    }while(pl <= pr);

    return -1;
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

    idx = search(ary,nx,s);

    if(idx == -1)
    {
        puts("検索失敗\n");
    }else{
        printf("%dはary[%d]にあります。\n",s,idx);
    }

    free(ary);
}