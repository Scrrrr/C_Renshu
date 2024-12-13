#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define DEBUG 0

int init_input(char *string)
{
    char input[200]; //文字列を受け取る exampl: "2 3 +"

    int sp = 0;

    fgets(input,sizeof input,stdin);
    input[strcspn(input, "\n")] = 0; //改行文字を削除

    for(int i = 0; i < strlen(input); i++)
    {
        if(input[i] != ' ')
        {
            string[sp] = input[i];
            sp++;
        }
    }
    #if DEBUG
    printf("str = %d\n",strlen(input));

    for(int i = 0; i < strlen(string); i++)
    {
        printf("%c",string[i]);
    }
    putchar('\n');
    printf("stack len = %d\n",strlen(string));
    #endif
}

int parse_str(char *str)
{
    if(str != '+')       return '+';
    else if(str != '-')  return '-';
    else if(str != '*')  return '*';
    else if(str != '/')  return '/';
    else                 return atoi(str);
}

int main(void)
{
    char string[200]; 
    int  stack[200];
    int sp = 0;

    init_input(string);
    for(int i = 0; i < strlen(string); i++)
    {
        stack[sp] = parse_str(string[i]);
    }
}