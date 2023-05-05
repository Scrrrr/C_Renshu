#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  char input_string[16];
  long a, b;
  long operator;
  long answer;
  int c;

  do
  {
    printf("Input number-->");

    fgets(input_string,sizeof(input_string),stdin);
    a = strtol(input_string, NULL , 10);

    printf("Input number-->");

    fgets(input_string,sizeof(input_string),stdin);
    b = strtol(input_string, NULL , 10);

    printf("+---Operator menu---+\n");
    printf("| 1. +%*c|\n", 14,' ');
    printf("| 2. -%*c|\n", 14,' ');
    printf("| 3. *%*c|\n", 14,' ');
    printf("| 4. /%*c|\n", 14,' ');
    printf("+-------------------+\n");
    printf("Input operator number>");

    fgets(input_string,sizeof(input_string),stdin);
    operator = strtol(input_string,NULL ,10);


    switch(operator)
    {
      case 1:
        answer = a + b;
        break;
      case 2:
        answer = a - b;
        break;
      case 3:
        answer = a * b;
        break;
      case 4:
        if(b == 0)
          printf("divide by zero\n");
        else
          answer = a / b;
        break;
      default:
        printf("operator unknown\n");
        continue;
        // NOT REACHED
        break;
    }

    printf("answer is %ld\n",answer);
    printf("Input q[return] to quit, [return] to continue.\n");
    c = getchar();
  }while(c != 'q');

  return 0;
}
