#include<stdio.h>

void minmax(int array[],int *min, int *max)
{
    *min = 100;
    *max = 0;
    int i = 0;

    while(array[i] != -1)
    {
        if(*max < array[i])   *max = array[i];
        if(*min > array[i])   *min = array[i];
        i++;
    }
}

int main(void)
{
    int array[10];
    int min,max;

    for(int i = 0; i < sizeof array / sizeof array[0]; i++)
    {
        scanf("%d",&array[i]);
        if(array[i] == -1)
            break;
    }
    minmax(array,&min,&max);
    printf("min = %d\nmax = %d\n",min,max);
}