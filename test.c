#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct STRUCT_REQUEST{
    char name[100];
    int  age;
}_REQUEST;

int main(void)
{
    _REQUEST *request[10] = {NULL};   
    int n;
    printf("人数 : ");  scanf("%d",&n);

    for(int i = 0; i < n; i++)
    {
        request[i] = malloc(sizeof(_REQUEST));
        if(request[i] == NULL)
        {
            puts("メモリエラー");
            return -1;
        }


        printf("[%d人目]\n",i+1);
        printf("名前 : ");   
        fgets(request[i]->name, sizeof(request[i]->name),stdin);
        request[i]->name[strcspn(request[i]->name,"\n")] = 0;

        printf("年齢 : ");   scanf("%d",&request[i]->age);
        getchar();
    }
    puts("入力されたデータを表示します");

    for(int i = 0; i < n; i++)
    {
        printf("[%d人目]\n",i+1);
        printf("名前 : %s\n",&request[i]->name);
        printf("年齢 : %d\n",&request[i]->age);
    }
    
}