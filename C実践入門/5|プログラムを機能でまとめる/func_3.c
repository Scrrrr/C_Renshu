#include <stdio.h>

int sum(double a, double b)
{
  int return_value;

  return_value = a + b;

  return return_value;
}

int main(int argc, char *argv[])
{
  int num1,num2;
  int answer;

  num1 = 1;
  num2 = 2;

  answer = sum(num1,num2);

  printf("answer = %d\n",answer);

  return 0;
}

