#include<stdio.h>
#include<stdlib.h>

int search(const int ary[], const int n, const int key)
{
    int pl = 0;
    int pr = n - 1; //要素数の数は10個。インデックスは0~9のため。

    do
    {
        int pc = (pl + pr) / 2;

        if(ary[pc] == key)
        {
            return pc;
        }else if(ary[pc] < key){
            pl = pc + 1;
        }else{
            pr = pc - 1;
        }
    }while(pl <= pr);

    return -1;
}

int main(void)
{
    int s;
    int array[10] = {11,22,33,44,55,66,77,88,99,100};
    int idx;

    printf("検索値 : ");    scanf("%d",&s);

    idx = search(array,sizeof(array) / sizeof(array[0]), s);

    if(idx == -1)
    {
        puts("見つかりませんでした。");
    }else
        printf("%dはarray[%d]にあります。",s,idx);

}