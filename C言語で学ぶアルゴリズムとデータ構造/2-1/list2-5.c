#include<stdio.h>
#include<stdlib.h>

int maxof(const int a[], int n)
{
    int max = a[0];

    for(int i = 0; i < (n - 1); i++)
    {
        if(a[i] > max) max = a[i];
    }

    return max;
}

int main(void)
{
    int number;
    int max;

    printf("人数 :");
    scanf("%d",&number);

    int *an = calloc(number,sizeof(int));

    printf("%d人の身長を入力してください\n",number);
    for(int i = 0; i < number; i++)
    {
        printf("height[%d] :",i);
        scanf("%d",&an[i]);
    }

    printf("最大値は%dです。\n",maxof(an,number));

    free(an);

    return 0;
}