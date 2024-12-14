#include<stdio.h>
#include<stdlib.h>

int binarySearch(int *a, int *b, int aE, int bE)
{
    int count = 0;
    for(int i = 0; i < bE; i++)
    {
        int left  = 0;
        int right = aE - 1;

        while(left <= right)
        {
            int mitIDX = (left + right) / 2;

            if(a[mitIDX] == b[i])
            {
                count++;
                break;
            }else if(a[mitIDX] < b[i]){
                left = mitIDX + 1;
            }else{
                right = mitIDX - 1;
            }
        }
    }

    return count;
}

void inputArray(int *size, int **arr)
{
    scanf("%d", size);
    *arr = (int *)calloc(*size, sizeof(int));
    for(int i = 0; i < *size; i++)
        scanf("%d", &(*arr)[i]);
}

int main(void)
{
    int an,bn;
    int *a;
    int *b;
    int ans;

    inputArray(&an, &a);
    inputArray(&bn, &b);

    ans = binarySearch(a,b,an,bn);

    printf("%d\n",ans);
    

    free(a);
    free(b);
}