#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void shuffle(int a[], int n)
{
    srand(time(NULL));
    int tmp,n1,n2;

    for(int i = 0; i < n; i++)
    {
        n1 = rand() % n;
        n2 = rand() % n;

        tmp = a[n1];
        a[n1] = a[n2];
        a[n2] = tmp;
    }
}

int main(void)
{
    int a[] = {1919,23,44,33,22,4,4,44,22};
    int AryLen = sizeof(a) / sizeof(a[0]);

    shuffle(a,AryLen);

    for(int i = 0; i < AryLen; i++)
        printf("a[%d] = %d\n",i,a[i]);
}