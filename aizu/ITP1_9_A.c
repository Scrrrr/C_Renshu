#include<stdio.h>
#include<string.h>

int check(char* w, char* t)
{
    int ans=0;
    char* find;
    char* start;
    start = t;
    for (;;)
    {
        find = strcasestr(start, w);
        if (find)
        {
            start = find + 1;
            ans++;
        }
        else
            break;
    }
    return ans;
}

void to_lower(char *str)
{
    for(int i = 0; i < strlen(str); i++)
    {
        if('A' <= str[i] && str[i] <= 'Z')
        {
            str[i] -= 32;
        }
    }
}

int main(void)
{
    char w[10];// = "computer";
    char t[3000];
    char buff[3000];
    int ans = 0;
    int i = 0;
    scanf("%s", w);
    
    to_lower(w);

/*
    for (;;)
    {
        if (!i)
        {
            if (fgets(t, sizeof(t), stdin) == NULL)      fprintf(stderr, "fgets Error!");
        }
        else {
            if (fgets(buff, sizeof buff, stdin) == NULL) fprintf(stderr, "fgets Error!");
            if (!strcmp(buff, "END_OF_TEXT\n"))  break;
            strcat(t, buff);
        }
        i++;
    }
*/
    for(;;)
    {
        scanf("%s",t);
        if(strcmp(t,"END_OF_TEXT") == 0)
            break;
        to_lower(t);
        if(strcmp(t,w) == 0)
            ans++;
    }
/*
    for (int j = 0; j < i; j++)
    {
        char* p;
        p = strchr(t, '\n');
        if (p) *p = ' ';
    }
    ans = check(w,t);

*/
    //printf("[i = %d] \n%s\n", i, t);
    printf("%d\n", ans); //ans is
}