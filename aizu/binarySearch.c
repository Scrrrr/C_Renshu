#include<stdio.h>

int search(int *a,int *b,int aE, int bE)
{
    int count = 0;
    for(int i = 0; i < aE; i++)    
    {
        int left = 0;
        int right = bE - 1;

        while(left <= right)
        {
            int MitIDX = (left + right) / 2;

            if(b[MitIDX] == a[i])
            {
                count++;
                break;
            }else if(b[MitIDX] < a[i])
            {
                left = MitIDX + 1;
            }else
                right = MitIDX - 1;
        }
    }

    return count;
}

int main(void)
{
    int a[] = {1,2,3,4,5};
    int b[] = {3,4,1};

    int ans = search(a,b,sizeof(a)/sizeof(a[0]),sizeof(b)/sizeof(b[0]));
    printf("%d\n",ans);
}