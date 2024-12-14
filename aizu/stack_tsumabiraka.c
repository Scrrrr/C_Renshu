#include <stdio.h>
#include <string.h>
#include <stdlib.h>

enum{
    STACK_SIZE = 100,
};

typedef enum{
    IT_NULL,
    IT_DIGIT,
    IT_ADD,
    IT_SUB,
    IT_MUL,
    IT_DIV,
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
        return(Item) { .type=IT_ADD};
    }else if(!strcmp(s,"-")){
        return(Item) { .type=IT_SUB};
    }else if(!strcmp(s,"*")){
        return(Item) { .type=IT_MUL};
    }else if(!strcmp(s,"/")){
        return(Item) { .type=IT_DIV};
    }else{
        return(Item) { .type=IT_DIGIT, .value=atoi(s)};
    }

}

void stack_push(Item item)
{
    if(stack_sp >= STACK_SIZE)
    {
        fprintf(stderr,"stack overflow!\n");
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

    *item = stack[--stack_sp]; //デクリメントしてから

    return 1;
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

        case IT_ADD:{
            Item op2 = calc();
            Item op1 = calc();
            Item result;
            result.type = IT_DIGIT;
            result.value = op1.value + op2.value;
            stack_push(result);
            return calc();
        }break;
        case IT_SUB:{
            Item op2 = calc();
            Item op1 = calc();
            Item result;
            result.type = IT_DIGIT;
            result.value = op1.value - op2.value;
            stack_push(result);
            return calc();
        }break;
        case IT_MUL:{
            Item op2 = calc();
            Item op1 = calc();
            Item result;
            result.type = IT_DIGIT;
            result.value = op1.value * op2.value;
            stack_push(result);
            return calc();
        }break;
        case IT_DIV:{
            Item op2 = calc();
            Item op1 = calc();
            Item result;
            if(op2.value == 0.0)
            {
                fprintf(stderr,"zero division error\n");
                exit(EXIT_FAILURE);
            }
            result.type = IT_DIGIT;
            result.value = op1.value / op2.value;
            stack_push(result);
            return calc();
        }break;
    }
    return ItemNull;
}

int main(int argc,char *argv[])
{
    for(int i = 1; i < argc; i++)
    {
        Item item = parse_arg(argv[i]);
        stack_push(item);
    }

    Item result = calc();
    fflush(stdout);

    printf("%d\n",result.value);
}