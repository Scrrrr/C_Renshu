#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int sumof(const int a[], int n){
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    return sum;
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

    printf("合計値は%dです。\n",sumof(array,no));

    free(array);
}