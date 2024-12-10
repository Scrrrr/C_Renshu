#include<stdio.h>

int gcd(int x, int y)
{
    int amari = 1;
    int shou;
    int min = (x < y) ? x : y;
    int max = (x > y) ? x : y;

    //printf("min = %d\n",min);
    //printf("max = %d\n",max);

    while(amari != 0)
    {
        amari = max % min;        
        max = min;
        min = amari;
    }
    return max;
}

int main(void)
{
    int x,y;
    int ans;
    scanf("%d %d",&x,&y);
    ans = gcd(x,y);
    printf("%d\n",ans);
}
