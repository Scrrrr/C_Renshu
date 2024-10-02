#include<stdio.h>
#include<stdlib.h>

int compare(const long *a, const long *b)
{
    if(*a > *b)
    {
        return 1;
    }else if(*a < *b)
        return -1;
    else{
        return 0;
    }
}

int main(void)
{
    long s;
    long array[] = {5,6,7,8,9,10,11,12,13,14};

    printf("検索値 : ");    scanf("%ld",&s);

    long *p = bsearch(
        &s,
        array,
        sizeof(array) / sizeof(array[0]),
        sizeof(long),
        (int (*)(const void *, const void *))compare
    );

    if(p == NULL)
    {
        puts("検索失敗");
    }else{
        puts("検索成功");
        printf("%dはarray[%d]にあります。\n",s,(long)(p - array));
    }

    return 0;
}