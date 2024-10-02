#include<stdio.h>
#include<stdlib.h>

#define NUM 10

int compare(const long *a, const long *b)
{
    if(*a < *b)
    {
        return 1;
    }else if(*a > *b){
        return -1;
    }else{
        return 0;
    }

}

int main(void)
{
    long s;
    long array[] = {9,8,7,6,5,4,3,2,1,0};

    printf("検索値 : "); scanf("%ld",&s);

    long *p = bsearch(
        &s,
        array,
        NUM,
        sizeof(long),
        (int (*)(const void *,const void *))compare
    );

    if(p == NULL)
    {
        puts("検索失敗");
    }else{
        puts("検索成功");
        printf("%ldはarray[%d]にあります。",array[p - array],(int)(p - array));
    }
}