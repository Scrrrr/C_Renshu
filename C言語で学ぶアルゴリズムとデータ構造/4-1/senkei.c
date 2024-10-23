#include<stdio.h>

typedef struct __STATION__ {
    struct __STATION__ *next;
    char name[60];
    int rapid;
}station;

int main(void)
{
    station machida     = { NULL,   "machida",  1};
    station kobuchi     = { &machida,   "kobuchi",  0};
    station fuchinobe   = { &kobuchi,   "fuchinobe",  0};
    station yabe        = { &fuchinobe,   "yabe",  0};
    //station katakura    = { &yabe,   "katakura",  0};
    //station hachioji    = { &katakura,   "hachioji",  1};

    station *head = &yabe;
    station *p;

    for(p = head; p != NULL; p = p->next)
    {
        printf("%s",p->name);
        if(p->rapid)
            printf(" (rapid)");
        printf("\n");
    }

}