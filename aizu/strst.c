#include<stdio.h>
#include<string.h>

int check(char *str1, char *str2)
{
    char strbuf[518] = {0};  

    strncpy(strbuf, str1, sizeof(strbuf) - 1);
    strncat(strbuf, str1, sizeof(strbuf) - strlen(strbuf) - 1);

    return strstr(strbuf,str2) != NULL;
}

int main(void)
{
    char str1 = "abcdefg"; //"私はその男の写真を三葉持っている。";
    char str2 = "de"; //"その男の写真";

    if(check(str1,str2))
    {
        puts("Yes");
    }else{
        puts("No");
    }
}