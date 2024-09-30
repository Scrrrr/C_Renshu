//線形探索
#include<stdio.h>
#include<stdlib.h>

int search(const int a[], int n, int key)
{

    for(int i = 0; i < n; i++)
    {
        if(a[i] == key)
            return i;
    }

    return -1;

}

int main(void)
{
    int n,s;

    printf("線形探索\n");
    printf("要素数:");  scanf("%d",&n);

    int *ary = calloc(n,sizeof(int));

    for(int i = 0; i < n; i++)
    {
        printf("ary[%d] : ",i);
        scanf("%d",&ary[i]);
    }

    printf("探す値:"); scanf("%d",&s);
    int idx = search(ary,n,s);

    if(idx == -1)
        printf("失敗");
    else
        printf("%dはary[%d]にあります\n",s,idx);

    free(ary);

}