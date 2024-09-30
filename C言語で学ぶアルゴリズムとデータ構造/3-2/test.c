#include<stdio.h>

int main(void)
{
    int ary[] = {10, 20, 30, 40, 50};
    int *p = &ary[3];  // ary[3]のアドレス（40の位置）

    printf("ary[3] = %d\n",ary[(p - ary)]);
}