#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[] = "I'm Back And I'm mothafuckin' Vengeful";
    char *token;

    token = strtok(str," ");
    while(token)
    {
        token = strtok(NULL," ");
        if(token != NULL) puts(token);
    }
    /*
NULLを渡すことで、「前回の処理を続けてください」という意味になります
関数は前回の位置を記憶しており、そこから次のトークンを探します

1回目: strtok(str, " ") → "Hello"を返す
2回目: strtok(NULL, " ") → "world"を返す
3回目: strtok(NULL, " ") → "program"を返す
4回目: strtok(NULL, " ") → NULLを返す（これ以上トークンがない）
    */

}