#include<stdio.h>

#define N 5

int main(void)
{
    int a[N];

    for(int i = 0; i < N; i++)
    {
        printf("a[%d] :",i);
        scanf("%d",&a[i]);
    }

    printf("各要素の値\n");

    for(int i =0; i < N; i++)
    {
        printf("a[%d] = %d\n",i, a[i]);
    }
}