#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

bool ring(char* str1, char* str2)
{
    int len1 = strlen(str1);
    char* string = (char *)malloc(len1 * 2 + 1);
    if (!string) return false;

    strcpy(string, str1);
    strcat(string, str1);

    bool result = (strstr(string, str2) != NULL);
    free(string);
    return result;
}

int main(void)
{
    char str1[100] = "vanceknowledgetoad";
    char str2[100] = "advanced";
    bool ans;
    //scanf("%s", str1);
    //scanf("%s", str2);

    ans = ring(str1, str2);

    if (ans)
    {
        puts("Yes");
    }
    else {
        puts("No");
    }
}