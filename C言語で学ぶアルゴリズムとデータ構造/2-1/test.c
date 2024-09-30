#include<stdio.h>
#include<stdlib.h>

//test

void ConvertBinary(int n)
{
    int i;

    for(i = 0; n > 0; i++)
    {
        n % 2;
        n = n/ 2;
    }

    char *array = calloc(i,sizeof(char));

}

int main(void)
{
    int number;
    printf("整数を入力してください:"); scanf("%d",&number);

    ConvertBinary(number);
}