#include <stdio.h>

int sum(int num1, int num2){
  int sum;

  sum = num1 + num2;

  return sum;
}

int main(int argc, char *argv[])
{
  int num_1;
  int num_2;
  int answer;

  num_1 = 1;
  num_2 = 2;

  answer = sum(num_1 , num_2);

  printf("answer = %d\n",answer);

  return 0;
}
