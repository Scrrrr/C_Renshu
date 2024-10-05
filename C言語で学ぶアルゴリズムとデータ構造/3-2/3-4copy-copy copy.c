#include<stdio.h>
#include<stdlib.h>

int search(const int ary[], const int n, const int key)
{
    int pl = 0;
    int pr = n - 1;
    int pc;

    while(pl <= pr)
    {
        pc = (pl + pr) / 2;
        
        if(ary[pc] == key)
        {
            return pc;
        }else if(ary[pc] < key){
            pl = pc + 1;
        }else{
            pr = pc - 1;
        }

    }//while(pl <= pr);  //条件が不一致になったらループを抜ける

    return -1;
}

int main(void)
{
    int s;
    int idx;
    int array[10] = {0,11,22,33,44,55,66,77,88,99};
    int aryLen = sizeof(array) / sizeof(array[0]);

    printf("検索値 : ");    scanf("%d",&s);

    idx = search(array,aryLen, s);

    if(idx == -1)
    {
        puts("見つかりませんでした。\n");
    }else{
        printf("%dはarray[%d]にあります。\n",s,idx);
    }
}