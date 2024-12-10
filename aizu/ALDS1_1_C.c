#include<stdio.h>
#include<stdlib.h>
/*
配列変数A [2,3,5...]

if(A[i] % x == 0)
goto:素数じゃない

配列変数Aを制約の数の半分くらい確保して配列を１で初期化する

グローバル変数iで配列Aの要素数を共有

素数である：
    A[i] = 素数;
    i++;
*/

int prime(int n, int array[])
{
    int count = 0;
    int primes[5000] = {0};

    for(int i = 2; i < n; i++)
    {
        int is_prime = 1;

        for(int j = 0; j < count; j++)
        {
            if(primes[j] * primes[j] == 0) break;

            if(array[i] % primes[i] == 0)
            {
                is_prime = 0;
                break;
            }
        }
            

        if(is_prime)
        {
            for(int j =2; j * j <= array[i]; j++)
            {
                if(array[i] % j == 0)
                {
                    is_prime = 0;
                    break;
                }
            }
        }

        if(is_prime)
        {
            primes[count] = array[i];
            count++;
        }

    }

    return count;
}

int main(void)
{
    int n;
    int *array;
    int ans;

    scanf("%d",&n);
    array = calloc(n,sizeof(int));
    
    for(int i = 0; i < n; i++)
        scanf("%d",&array[i]);

    ans = prime(n,array);
    printf("%d\n",ans);
    
}