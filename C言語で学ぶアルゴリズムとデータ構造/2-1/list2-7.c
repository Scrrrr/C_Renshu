#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void SwapArray(int a[], int n)
{
    for(int i = 0; i < (n / 2); i++)
    {
        int tmp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = tmp;
    }
}

int main(void)
{
    int number;
    int nx;

    printf("要素数 : ");
    scanf("%d",&nx);

    int *array = calloc(nx,sizeof nx);

    for(int i = 0; i < nx; i++)
    {
        printf("array[%d] : ",i);
        scanf("%d",&array[i]);
    }

    SwapArray(array,nx);

    puts("並び変えました。");
    for(int i = 0; i < nx; i++)
    {
        printf("array[%d] : %d\n",i,array[i]);
    }

    free(array);

    return 0;
}