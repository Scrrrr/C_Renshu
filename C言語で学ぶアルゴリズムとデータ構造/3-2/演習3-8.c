#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a, const void *b)
{
    const int *a_num = a;
    const int *b_num = b;

    if(*a_num < *b_num)
    {
        return -1;
    }else if(*a_num > *b_num){
        return 1;
    }else{
        return 0;
    }
};

void *binsearch(const void *key,    const void *base,
                size_t nmemb,   size_t size,
                int (*compar)(const void *, const void *)
)
{
    int pt,pb,pc;

    

};

int main(void)
{
    int s;
    int *p;
    int array[10] = {1,3,4,32,5,6,64,55,77,88};

    printf("検索値 : "); scanf("%d",&s);

    qsort(
        array,
        sizeof(array) / sizeof(array[0]),
        sizeof(int),
        cmp
    );

    //debug
    ////for(int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    ////    printf("array[%d] = %d\n",i,array[i]);

    p = binsearch(
        &s,
        array,
        sizeof(array) / sizeof(array[0]),
        sizeof(int),
        cmp
    );
    
}