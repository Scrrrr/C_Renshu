#include<stdio.h>

int max4(int a, int b, int c, int d)
{
    int max;

    max = a;
    if(b > max) max = b;
    if(c > max) max = c;
    if(d > max) max = d;
    
    return max;
}

int main(void)
{
    int result;

    result = max4(23,4,44,88);

    printf("最大の数値は%dです\n",result);

    return 0;
}