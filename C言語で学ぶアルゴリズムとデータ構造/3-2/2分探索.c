#include<stdio.h>

int search(const int a[],const int size,const int key)
{
    int pl = 0;
    int pr = size - 1;
    int pc;

    do{
        pc = (pl + pr) / 2;
        if(a[pc] == key)
            return pc;
        if(a[pc] > key)
            pr = pc - 1;
        else
            pl = pc + 1;
    }while(pl <= pr);

    return -1;
}

int main(void)
{
    puts("2分探索");
    int array[10] = {2,3,4,5,6,8,10,12,13,20};
    int size = sizeof(array) / sizeof(array[0]);
    int s;

    printf("探す値");   scanf("%d",&s);

    int idx = search(array,size,s);

    if(idx == -1)
    {
        puts("見つかりません");
    }else{
        printf("%dはarray[%d]にあります。",s,idx);
    }
}