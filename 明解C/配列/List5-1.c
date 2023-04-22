#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int score[4];
  char scoreC[4][32];
  int sum = 0;
  double avg;

  printf("5人の点数を入力してください。\n");
  
  for (int i = 0; i < 5; i++) {
    printf("%d番目:",i + 1); fgets(scoreC[i],32,stdin);
    score[i] = atoi(scoreC[i]);
    sum += score[i];
  }

  avg = (float)sum / 5;

  printf("合計点:%4d\n",sum);
  printf("平均点:%.1f\n",avg);
}
