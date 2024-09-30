#include<stdio.h>

int max4(int a, int b, int c, int d)
{
    int min;

    min = a;
    if(b < min) min = b;
    if(c < min) min = c;
    if(d < min) min = d;
    
    return min;
}

int main(void)
{
    int result;

    result = max4(23,4,44,3);

    printf("最小の数値は%dです\n",result);

    return 0;
}