#include<stdio.h>
#define USAGE "usage: [add][sub][mul][div]\n:"

int plus1(int x, int y)
{
    return x + y;
}

int main(void)
{
    int (*p_func)(int, int);
    char buff[128];
    scanf("%s",&buff);

    p_func = buff;

    printf("%d\n",p_func(2,3));
}