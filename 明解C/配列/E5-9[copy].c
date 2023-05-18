#include<stdio.h>

#define MEMBER 15

int main(void)
{
    int i, j;
    int num = 15, max;
    int tensu[MEMBER] = {67,68,100,65,63,62,67,65,69,61,63,61,62,66,60};
    int bunpu[11] = {0};

    for(i = 0; i < num; i++){
//        printf("%2d番：", i + 1);
        do{
            if(tensu[i] < 0 || tensu[i] > 100)
             printf("\a1～100で入力して下さい。：");
        }while(tensu[i] < 0 || tensu[i] > 100);
        bunpu[tensu[i] / 10]++;
    }
    printf("\n");

    max = bunpu[0];

    for(i = 1; i <= 10; i++){
        if(max < bunpu[i]){
            max = bunpu[i];
        }
    }

    for(i = max; i > 0; i--){
        for(j = 0; j <= 10; j++){
            if(i == bunpu[j]){
                printf(" * ");
                bunpu[j]--;
            }else{
                printf("   ");
            }
        }
    putchar('\n');
    }
    printf("--------------------------------\n");
    printf(" 0 10 20 30 40 50 60 70 80 90 100\n");
    return 0;

  
