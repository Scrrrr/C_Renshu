#include<stdio.h>
#include<string.h>

int ring(char* str1, char* str2)
{
    char strbuf[518];
    strcat(strbuf,str1);
    strcat(strbuf,str1);
    printf("%s\n",strbuf);

    int count = 0;
    int p2 = 0;

    for (int i = 0; i < 518; i++)
    {
        if(str2[p2] == strbuf[i])
        {
            count++;
            if(count == strlen(str2))  return 1;
            p2++;
        }else{
            p2 = 0;
            count = 0;
        }
    }

    return 0;
}

int main(void)
{
    char str1[100];// = "aaaaaaaaaabbbbbbbbbbccccccccccddddddddddeeeeeeeeeeffffffffffgggggggggghhhhhhhhhhiiiiiiiiiijjjjjjjjjj";
    char str2[100];// = "ja";
    int ans;

    scanf("%s",str1);
    scanf("%s",str2);

    ans = ring(str1, str2);
    //printf("%d\n",ans);

    if(ans)
    {
        puts("Yes");
    }else{
        puts("No");
    }

}