#include<stdio.h>
#include<stdlib.h>

int selectsort(int n, int *array)
{
    int mindex;
    int tmp;
    int c = 0;
    for(int i = 0; i < n - 1; i++)
    {
        mindex = i;
        for(int j = i + 1; j < n; j++)
        {
            if(array[mindex] > array[j])
            {
                mindex = j;
            }
        }
        if(mindex != i)
        {
            tmp = array[mindex];
            array[mindex] = array[i];
            array[i] = tmp;
            c++;
        }
    }

    return c;
}

int main(void)
{
    int n;
    int *array;
    int c;

    scanf("%d",&n);
    array = (int *)calloc(n,sizeof(int));

    for(int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }

    c = selectsort(n,array);

    for(int i = 0; i < n; i++)
    {
        if(i != (n - 1))
            printf("%d ",array[i]);
        else
            printf("%d\n",array[i]);
        
    }
    printf("%d\n",c);
    
}