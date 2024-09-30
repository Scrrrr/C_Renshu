#include<stdio.h>
#include<stdlib.h>

void ary_copy(int a[], const int b[], int n){
    for(int i = 0; i < n; i++)
    {
        a[n - i - 1] = b[i];
    }
}

int main(void)
{
    int b[] = {1,2,3,4,5,6,7};

    int ArrayLen = sizeof(b) / sizeof(b[0]);

    int *a = calloc(ArrayLen,sizeof(int));

    ary_copy(a,b,ArrayLen);

    for(int i = 0; i < ArrayLen; i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
    }

    free(a);

}