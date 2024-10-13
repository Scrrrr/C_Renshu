#include<stdio.h>
#include<stdlib.h>

typedef struct _STUDENT{
    int stid;
    char name[40];
}STUDENT;

void set_data(STUDENT *p)
{
    printf("Student ID? "); scanf("%d",&p->stid);
    printf("Name? "); scanf("%s",p->name);
}

int main(void)
{
    STUDENT *student;
    int n;

    printf("Member ?"); scanf("%d",&n);

    student = (STUDENT*)malloc(n * sizeof(STUDENT));
    if(student == NULL)
    {
        puts("メモリエラー");
        return -1;
    }

    for(int i = 0; i < n; i++)
    {
        printf("[%d人目]\n",i + 1);
        set_data(&student[i]);
    }

    puts("入力されたデータです。");

    for(int i = 0; i < n; i++)
    {
        printf("[--%d--]\n",i+1);
        printf("Student ID: %d\n",student[i].stid);
        printf("Name      : %s\n",student[i].name);

    }

    free(student);
    return 0;
}
