#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b)
{
    const int *p_int1 = a; 
    const int *p_int2 = b; 

    printf("%dと%dの比較\n",*p_int1,*p_int2);

    if(*p_int1 < *p_int2)
    {
        return 1;
    }else if(*p_int1 > *p_int2){
        return -1;
    }else{
        return 0;
    }

}

int main(void)
{
    int i;
    int array[13] = {1,7,4,32,87,4,2,6,9,0,6,4,2};

    qsort(
        &array,
        (sizeof(array) / sizeof(array[0]) ),
        sizeof(int),
        compare
    );

    for(i = 0; i < (sizeof array / sizeof array[0]); i++)
    {
        printf("array[%d] = %d\n",i,array[i]);
    }

    return 0;
}