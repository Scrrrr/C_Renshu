#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define STACK_SIZE 100

typedef enum{
    IT_NULL,  //NULLの時
    IT_DIGIT, //数値の時
    IT_ADD,
    IT_SUB,
}ItemType;

typedef struct{
    ItemType type;
    int value;
}Item;

Item ItemNull;
Item stack[STACK_SIZE];
int stack_sp;

Item parse_arg(const char *s)
{
    if(!strcmp(s,"+"))
    {
        return (Item) { .type=IT_ADD};
    }else if(!strcmp(s,"-")){
        return (Item) { .type=IT_SUB};
    }else{
        return (Item) { .type=IT_DIGIT, .value=atoi(s)};
    }
}

Item stack_push(Item item)
{
    if(stack_sp >= STACK_SIZE)
    {
        fprintf(stderr, "stack overflow!\n");
        exit(EXIT_FAILURE);
    }

    stack[stack_sp++] = item;
}

int stack_pop(Item *item)
{
    if(stack_sp <= 0)
    {
        return 0;
    }

    *item = stack[--stack_sp];
}

Item calc(void)
{
    Item item;
    if(!stack_pop(&item))
    {
        return ItemNull;
    }

    switch (item.type)
    {
    default: return item; break;
    case IT_ADD:
    {
        Item op2 = calc();
        Item op1 = calc();
        Item result;
        result.type = IT_DIGIT;
        result.value = op1.value + op2.value;
        stack_push(result);
        return calc();
    }break;
    case IT_SUB:
    {
        Item op2 = calc();
        Item op1 = calc();
        Item result;
        result.type = IT_DIGIT;
        result.value = op1.value - op2.value;
        stack_push(result);
        return calc();
    }
    
    }

    return ItemNull;
}

int main(void)
{
    char strings[200];
    fgets(strings,sizeof(strings),stdin);
    for(int i = 0; i != '\n'; i++)
    {
        Item item = parse_arg(&strings[i]);
        stack_push(item);
    }

    Item result = calc();

    printf("%d",result.value);
    fflush(stdout);
}
