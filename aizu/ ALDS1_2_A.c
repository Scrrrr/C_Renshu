#include<stdio.h>
#include<stdlib.h>

int sort(int n, int *a)
{
    int i = 0;
    int c = 0;
    int count = 0;

    while(c != (n-1))
    {
        if(a[i] > a[i+1])
        {
            int t = a[i];
            a[i] = a[i+1];
            a[i+1] = t;
            c = 0; i = 0;
            count++;
        }else{
            c++;
            i++;
        }
    }

    return count;
}

int main(void)
{
    int n;
    int *array;
    int count;
    scanf("%d",&n);

    array = (int *)calloc(n,sizeof(int));
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    count = sort(n,array);
    
    for(int i = 0; i<n; i++)
    {
        if(i != (n-1))
            printf("%d ",array[i]);
        else
            printf("%d\n",array[i]);
    }
    printf("%d\n",count);

}