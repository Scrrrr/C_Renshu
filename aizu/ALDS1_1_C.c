#include<stdio.h>
#include<stdlib.h>
/*
配列変数A [2,3,5...]

if(A[i] % x == 0)
goto:素数じゃない

配列変数Aを制約の数の半分くらい確保して配列を１で初期化する

グローバル変数iで配列Aの要素数を共有

素数である：
    A[i] = 素数;
    i++;
*/

int prime(int n, int array[])
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        int j;
        for(j = 2; j <= array[i]; j++)
        {
            if(array[i] % j == 0) break;
        }
        if(j == array[i])
            count++;
    }

    return count;
}

int main(void)
{
    int n;
    int *array;
    int ans;

    scanf("%d",&n);
    array = calloc(n,sizeof(int));
    
    for(int i = 0; i < n; i++)
        scanf("%d",&array[i]);

    ans = prime(n,array);
    printf("%d\n",ans);
    
}