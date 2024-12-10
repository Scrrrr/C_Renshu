#include<stdio.h>
#include<stdlib.h>

int prime(int n, int array[])
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        int j;
        for(j = 2; j <= array[i]; j++)
        {
            if(array[i] % j == 0) break;
        }
        if(j == array[i])
            count++;
    }

    return count;
}

int main(void)
{
    int n;
    int *array;
    int ans;

    scanf("%d",&n);
    array = calloc(n,sizeof(int));
    
    for(int i = 0; i < n; i++)
        scanf("%d",&array[i]);

    ans = prime(n,array);
    printf("%d\n",ans);
    
}