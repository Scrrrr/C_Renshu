#include <stdio.h>
#include <string.h>

int ring(char *str1, char *str2)
{
    char strbuf[200] = {0};  

    strncpy(strbuf, str1, sizeof(strbuf) - 1);
    strncat(strbuf, str1, sizeof(strbuf) - strlen(strbuf) - 1);

    return strstr(strbuf, str2) != NULL;
}

int main(void)
{
    char str1[100];
    char str2[100];
    int ans;

    scanf("%s",str1);
    scanf("%s",str2);

    ans = ring(str1, str2);

    if (ans)
    {
        puts("Yes");
    }
    else
    {
        puts("No");
    }

    return 0;
}