#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int minof(const int a[], int n){
    int min = a[0];

    for(int i = 1; i < n; i++)
    {
        if(min > a[i])
            min = a[i];
    }

    return min;
}

int main(void)
{
    int no;

    srand(time(NULL));
    printf("人数：");
    scanf("%d",&no);

    int *array = calloc(no,sizeof(int));

    for(int i = 0; i < no; i++)
    {
        array[i] = 100 + rand() % 90;
        printf("person[%d] : %d\n",i,array[i]);
    }

    printf("最小値は%dです。\n",minof(array,no));

    free(array);
}