#include<stdio.h>

#define swap(type, x, y) do { type t = x; x = y; y = t;} while(0)

int card_conv(unsigned x, int n, char d[])
{
    char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int digits = 0;

    if(x == 0)
    {
        d[digits++] = dchar[x % n];
    }else{
        while(x){
            d[digits++] = dchar[x % n];
            x /= n;
        }
    }

    for(int i = 0; i < digits / 2; i++)
    {
        swap(char, d[i], d[digits - i - 1]);
    }

    return digits;
}

int main(void)
{
    int retry;
    puts("10進数を基数変換します。");
    
    int array;

    do
    {
        unsigned no;
        int      cd;
        char     cno[512];

        printf("変換する非負の整数：");
        scanf("%d",&no);

        do{
            printf("何進数に変換しますか？(2-36) : ");
            scanf("%d",&cd);
        }while(cd < 2 || cd > 36);

        int dno = card_conv(no,cd,cno);

        printf("%d進数では",cd);
        for(int i = 0; i < dno; i++)
        {
            printf("%c",cno[i]);
        }
        printf("です。\n");

        printf("もう一度実行しますか？（1...はい／0...いいえ）:");
        scanf("%d",&retry);


    }while(retry == 1);

}