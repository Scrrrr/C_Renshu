#include<stdio.h>
#define Stack_Size 100

int push(int *Stack, int *sp, int n)
{
    if(*sp > Stack_Size)
    {
        return -1;
    }
    Stack[*sp] = n;
    (*sp)++;
    return 0;
}

int main(void)
{
    int c,n;
    int spp = 0;
    int *sp = &spp;
    int Stack[Stack_Size];

    do
    {
        printf("Select Menu:");
        c = getchar();
        if(c == 'i' || c == 'I')//push
        {
            printf("data -->");
            scanf("%d",&n);
            if(push(Stack,sp,n) == -1)
            {
                printf("error");
            }
        }
        if(c == 's' || c == 'S')//show stack
        {
            for(int i = 0; i < sizeof(Stack) / sizeof(Stack[0]); i++)
            {
                printf("%d ",Stack[i]);
            }
            putchar('\n');
        }
    }while(c != EOF);
}