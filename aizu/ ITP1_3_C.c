#include<stdio.h>
#define buff 3000

int main(void)
{
    int x[buff],y[buff];
    int i = 0;
    do{
        scanf("%d %d", &x[i], &y[i]);
        if(x[i] == 0 && y[i] == 0)
            break;
        i++;
    }while(i < buff);
//    printf("i = %d\n",i);

    for(int j = 0; j < i; j++)
    {
        int min = y[j] > x[j] ? x[j] : y[j];
        int max = y[j] > x[j] ? y[j] : x[j];
        printf("%d %d\n", min, max);
    }
}