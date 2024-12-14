#include<stdio.h>
#include<stdlib.h>

int LinearSearch(int *a, int *b, int an,int bn)
{
    int count = 0;

    for(int i = 0; i < an; i++)
    {
        for(int j = 0; j < bn; j++)
        {
            if(a[i] == b[j])
            {
                count++;
                b[j] = -1;
                break;
            }
        }
    }

    return count;
}

void init_input(int *size, int **arr)
{
    scanf("%d",size);
    *arr = (int *)calloc(*size,sizeof(int));
    for(int i = 0; i < *size; i++)
    {
        scanf("%d",&(*arr)[i]);
    }
}

int main(void)
{
    int an,bn;
    int *a;
    int *b;
    int ans;

    init_input(&an,&a);
    init_input(&bn,&b);


    ans = LinearSearch(a,b,an,bn);

/*
    printf("A[] =");
    for(int i = 0; i < an; i++)
    {
        printf("%2d",a[i]);
    }putchar('\n');
    printf("B[] =");
    for(int i = 0; i < bn; i++)
    {
        printf("%2d",b[i]);
    }putchar('\n');
*/
    printf("%d\n",ans);

    free(a);
    free(b);
}