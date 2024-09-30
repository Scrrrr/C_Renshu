#include<stdio.h>

int max4(int a, int b, int c)
{
    int min;

    min = a;
    if(b < min) min = b;
    if(c < min) min = c;
    
    return min;
}

int main(void)
{
    int result;

    result = max4(23,4,44);

    printf("最小の数値は%dです\n",result);

    return 0;
}