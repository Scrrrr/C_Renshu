#include <stdio.h>
#include <string.h>
#include <stdlib.h>

enum{
    STACK_SIZE = 100,
};

typedef enum{
    IN_NULL,
    IT_DIGIT,
    IT_ADD,
    IT_SUB,
}ItemType;

typedef struct{
    ItemType type;
    double value;
}Item;

Item ItemNull;
Item stack[STACK_SIZE];
int stack_pos;

Item parse_arg(const char *s)
{
    if(!strcmp(s,"+"))
    {
        return (Item) { .type=IT_ADD };
    }else if(!strcmp(s,"-"))
    {
        return (Item) { .type=IT_SUB };
    }else{
        return (Item) { .type=IT_DIGIT, .value=atof(s) };;
    }
}

void stack_push(Item item)
{
    if(stack_pos >= STACK_SIZE)
    {
        fprintf(stderr,"stack Overflow!\n");
        exit(EXIT_FAILURE);
    }

    stack[stack_pos++] = item;
}

int stack_pop(Item *item)
{
    if(stack_pos <= 0)
    {
        return 0;
    }

    *item = stack[--stack_pos];
    return 1;
}

Item calc(void)
{
    Item item;
    if(!stack_pop(&item))
    {
        return ItemNull;
    }

    switch(item.type)
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
    }

}

int main(int argc, char *argv[])
{
    for(int i = 1; i < argc; i++)
    {
        //printf("argv[%d] = [%s]\n",i,argv[i]);
        const char *s = argv[i];
        Item item = parse_arg(s);
        stack_push(item);
    }

    Item result = calc();

    printf("%f\n",result.value);
    fflush(stdout);


    return 0;

}