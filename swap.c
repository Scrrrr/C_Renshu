#include<stdio.h>
#include<stdbool.h>

void strchange(char *str)
{
    int len = 0;
    char tmp;


    switch (1)
    {
        case 1: //こっちでは先頭アドレスが保持されない！
            while(*str)
            {
                str++;
                len++;
            }
            break;
        case 2: //ポインタの位置が変更されない！
            while(str[len])
            {
                len++;
            }
            break;
    }


    printf("count = %d\n",len);
    printf("str = %s\n",str);

    for(int i = 0; i < (len / 2); i++)
    {
        tmp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = tmp;
    }

    //printf("%d",count);
}

int main(void)
{
    char string[] = "hellowor";
    strchange(string);
    printf("%s\n",string);
}