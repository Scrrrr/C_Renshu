#include<stdio.h>
#include<time.h>
#include<stdlib.h>

double aveof(const int a[], int n){
    int sum = 0;
    double ave;

    for(int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    ave = (double)sum / n;

    return ave;
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

    printf("合計値は%.2fです。\n",aveof(array,no));

    free(array);
}