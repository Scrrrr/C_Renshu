#include <stdio.h>
#include <stdlib.h>

#define MAX_PERSON 80

int main(void)
{
  char tensuu_c[80][5]; int tensuu[80];
  char person_c[4];     int person;
  int i,j;
  int bunpu[11] = {0};

  printf("人数を入力してください:");

  do {
    fgets(person_c, 4, stdin);
    person = atoi(person_c);

    if(person < 1 || person > MAX_PERSON)
      printf("\a1~%dで入力してください：",MAX_PERSON);
  }while (person < 1 || person > MAX_PERSON);

  printf("%d人の点数を入力してください。\n",person);

  for (i = 0; i < person; i++) {
    printf("%2d番:",i + 1);
    do {
      fgets(tensuu_c[i], 5, stdin);
      tensuu[i] = atoi(tensuu_c[i]);

      if (tensuu[i] < 0 || tensuu[i] > 100) {
        printf("1~100の間で入力してください");
      } 
    }while (tensuu[i] < 1 || tensuu[i] > 100);
    bunpu[tensuu[i] / 10]++;         /* 
    bunpu[tensuu[i] / 10] == bunp[10]++ == 100点 : * 
*/
  }

  puts("\n---分布グラフ---");
  printf("      100:");

  for(j = 0; j < bunpu[10]; j++)
    putchar('*');
  putchar('\n');

  for (i = 9; i >= 0; i--) {
    printf("%3d ~%3d:",i * 10,i * 10 + 9);
    for(j = 0; j < bunpu[i]; j++)
      putchar('*');
    putchar('\n');
  }

  return 0;
}
