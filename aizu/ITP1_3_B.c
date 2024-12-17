#include<stdio.h>

int main(void)
{
    int dataset[10000];
    int i = 0;

    for(;;)
    {
        int input;
        scanf("%d",&input);

        if(input == 0) break;

        dataset[i++] = input;
    }

    for(int n = 0; n < i; n++)
        printf("Case %d: %d\n",n+1,dataset[n]);
}