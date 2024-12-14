#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define STACK_SIZE 100

int stack[STACK_SIZE];
static int sp;

int push(int n)
{
    if(sp > STACK_SIZE)
    {
        fprintf(stderr,"stack overflow!\n");
        exit(EXIT_FAILURE);
    }

    stack[sp] = n;
    sp += 1;

    return 1;
}

int pop()
{
    if(sp < 0)
    {
        fprintf(stderr,"stack underflow!");
    }

    sp -= 1;

    return stack[sp];
}

void showstack()
{
    for(int i = 0; i < sp; i++)
    {
        if(i != (sp - 1))
            printf("|%2d",stack[i]);
        else
            printf("|%2d|\n",stack[i]);
    }
}

void parse(const char *s)
{
    int op1,op2,result;

    if(!strcmp(s,"+"))
    {
        op2 = pop();
        op1 = pop();
        result = op1 + op2;
        push(result);
    }else if(!strcmp(s,"-"))
    {
        op2 = pop();
        op1 = pop();
        result = op1 - op2;
        push(result);
    }else if(!strcmp(s,"*"))
    {
        op2 = pop();
        op1 = pop();
        result = op1 * op2;
        push(result);
    }else if(!strcmp(s,"/"))
    {
        op2 = pop();
        op1 = pop();
        if(op2 == 0)
        {
            fprintf(stderr,"zero division!\n");
            exit(EXIT_FAILURE);
        }
        result = op1 / op2;
        push(result);
    }else{
        push(atoi(s));
    }
}

int main(void)
{
    char input[400];
    
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0; 

    char *s = strtok(input, " ");
    while(s)
    {
        parse(s);
        s = strtok(NULL, " ");
    }

    int result = pop();
    printf("%d\n", result);

    return 0;
}