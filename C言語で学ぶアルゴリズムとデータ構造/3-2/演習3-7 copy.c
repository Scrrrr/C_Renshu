#include<stdio.h>
#include<stdlib.h>

int cmp(const int *a, const int *b)
{
    if(*a < *b)
    {
        return -1;
    }else if(*a > *b){
        return 1;
    }else{
        return 0;
    }
};

int main(void)
{
    int s;
    int *p;
    int array[10] = {4,9,13,17,1,8,48,12,900,0};

    printf("検索値 : ");    scanf("%d",&s);

    qsort(
        &array[0],
        sizeof(array) / sizeof(array[0]),
        sizeof(array[0]),
        (int (*)(const void *, const void *))cmp    //
    );

    for(int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        printf("array[%d] = %d\n",i,array[i]);
    }

    p = bsearch(                                    // p = bsearch(                                     
        &s,                                         //       &s, 
        array,                                      //       array,
        sizeof(array) / sizeof(array[0]),           //       sizeof(array) / sizeof(array[0]),
        sizeof(int),                                //
        (int (*)(const void *, const void *))cmp    //
    );

    if(p == NULL)
    {
        puts("検索失敗\n");
    }else{
        puts("検索成功");
        printf("%dはarrya[%d]にあります。\n",s,(int)(p - array));
    }

    return 0;

}