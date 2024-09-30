#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int *x = calloc(10,sizeof(int)); //int型のオブジェクトを生成
    
    if(x == NULL)
    {
        puts("記憶領域の確保に失敗しました。");
    }else{
        x = 1;
        printf("*x = %d\n",*x);
        free(x);
    }

    return 0;
}