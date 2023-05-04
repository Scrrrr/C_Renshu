#include <stdio.h>

int main(int argc, char *argv[])
{
  int a,b;
  int op;
  int answer;

  a = 0;
  b = 0;
  op = '/';

  switch(op)
  {
    case '+':
      answer = a + b;
      return 0;
    case '-':
      answer = a - b;
      break;
    case '*':
      answer = a * b;
      break;
    case '/':
      if(b == 0)
        printf("divide by zero\n");
      else
       answer = a / b;
      //b == 0 ? printf("divideby zero\n") : (answer = a / b);
      break;
    default:
      printf("operator unknown\n");
      break;
  }

  printf("%d %c %d = %d\n", a, op ,b , answer);

  return 0;
}
