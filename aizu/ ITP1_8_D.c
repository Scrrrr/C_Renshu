#include<stdio.h>
#include<string.h>

int ring(char *str1, char *str2)
{
    int strlen1 = strlen(str1);
    int strlen2 = strlen(str2);
    int count = 0;

    for(int i = 0; i < strlen1 + strlen2; i++)
    {
        for(int j = 0; j < strlen2; j++)
        {
            if(str1[i] == str2[j])
            {
                count++;
                if(count == strlen2)
                {
                    return 1;
                }

            }else{
                break;
            }
        }
    }
    
    return -1;
}

int main(void)
{
    char str1[100] = "nandakandawander";
    char str2[100] = "wandernanda";
    int ans;

    //scanf("%s",str1);
    //scanf("%s",str2);
    
    ans = ring(str1,str2);
    printf("%d\n",ans);

}