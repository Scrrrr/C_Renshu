#include <stdio.h>

void change(int n, int a[])
{
    int flag;
    int j;

    for(int i = 1; i < (n+1); i++)
    {
        flag = a[i];
        j = i - 1;

        for(int z = 0; z < n; z++)
        {
            if(z == (n-1))
            {
                printf("%d",a[z]);
                putchar('\n');
            }else
                printf("%d ",a[z]);
        }

        while(a[j] > flag && j >= 0)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = flag;
    }
}

int main(void)
{
    int n;
    int a[100];

    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    change(n,a);
}