#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define swap(type, x, y) do { type t = x; x = y; y = t;} while(0)

void ary_reverse(int a[], int n)
{
    for(int i = 0; i < n / 2; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j == (n - 1))   printf("%d\n",a[j]);
            else               printf("%d ",a[j]);
        }
        printf("a[%d]とa[%d]を交換します。\n",i,(n - i - 1));
        swap(int, a[i], a[n - i - 1]);
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

    ary_reverse(array,nx);

    puts("並び変えました。");
    for(int i = 0; i < nx; i++)
    {
        printf("array[%d] : %d\n",i,array[i]);
    }

    free(array);

    return 0;
}