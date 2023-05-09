#define TEST 1
/*構造体を作るにはアライメントを意識しよう*/
/*Test2のような関数であると、CPUの都合でchar型とdoubleの
 * 間の余ったアドレスを埋めるために詰め物をしてしまう。
 * それを防ぐためにTEST３のように大きいアドレスから
 * 宣言していこう。(多分ね)*/


#if TEST == 1
#include<stdio.h>

int main(void)
{
  printf("This program is TEST1\n");

  struct tag_question
  {
    char character; // 1Byte
    double namber;  // 8Byte
  };

  printf("size of question is %zu\n",sizeof(struct tag_question));

  return 0;
}


#elif TEST == 2
#include<stdio.h>

int main(void)
{

  printf("This program is TEST2\n");
  struct tag_question
  {
    char c1;
    double d1;
    char c2;
    double d2;
    char c3;
    double d3;
    char c4;
    double d4;
    char c5;
    double d5;
    char c6;
    double d6;
    char c7;
    double d7;
    char c8;
    double d8;
  };

  printf("size of question is %zu\n",sizeof(struct tag_question));

  return 0;
}

#elif TEST == 3
#include<stdio.h>

int main(void)
{

  printf("This program is TEST3\n");
  struct tag_question
  {
    double d1;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    char c1;
    char c2;
    char c3;
    char c4;
    char c5;
    char c6;
    char c7;
    char c8;
  };

  printf("size of question is %zu\n",sizeof(struct tag_question));

  return 0;
}
#endif
