#include<stdio.h>
#include<stdlib.h>

void sort(int n, int *a)
{
    int i = 0;
    int c = 0;

    while(c != n)
    {
        if(a[i] < a[i+1])
        {
            int t = a[i];
            a[i] = a[i+1];
            a[i+1] = t;
            c = 0; i = 0;
        }else{
            c++;
            i++;
        }
    }
}

int main(void)
{
    int n;
    int *array;
    scanf("%d",&n);

    array = (int *)calloc(n,sizeof(int));
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    sort(n,array);
    
    for(int i = 0; i<n; i++)
    {
        printf("%2d",array[i]);
    }

}