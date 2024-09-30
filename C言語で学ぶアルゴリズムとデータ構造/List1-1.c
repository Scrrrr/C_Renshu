#include<stdio.h>

int main(void)
{
    int a,b,c,d;
    int max;

    puts("最大の数を出力します");
    printf("数値1:"); scanf("%d",&a);
    printf("数値2:"); scanf("%d",&b);
    printf("数値3:"); scanf("%d",&c);
    printf("数値4:"); scanf("%d",&d);

    max = a;
    if(b > max)
        max = b;

    if(c > max)
        max = c;

    if(d > max)
        max = c;

    printf("Maxは%dです\n",max);

    return 0;
}