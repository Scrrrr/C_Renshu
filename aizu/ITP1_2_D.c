#include<stdio.h>

int check(int w, int h, int x, int y, int r)
{
    if(0 <= x && 0 <= y)
    {
        if(w < (x+r) || h < (y+r)) 
            return 0;
        else 
            return 1;
    }else{
        return 0;
    }
}

int main(void)
{
    int w,h,x,y,r;
    int ans;

    scanf("%d %d %d %d %d",&w,&h,&x,&y,&r);

    ans = check(w,h,x,y,r);

    if(ans)
    {
        puts("Yes");
    }else{
        puts("No");
    }
}