#include <stdio.h>

int main(int argc, char *argv[])
{
  int i;
  unsigned char *ptr;

  int num1 = 2147483647;
  long long num2 = 9223372036854775807;
  double num3 = 1.79693e+308;
  char char1[] = "H3llo W0rld";

  printf("num1 = %d\n",num1);
  ptr = (unsigned char *) &num1;
  for(i = 0; i < (int)sizeof(num1); i++)
  {
    printf("0x%X \n",*ptr);
    ptr++;
  }
  printf("\n");

  printf("num2 = %lld\n", num2);
  ptr = (unsigned char *) &num2;
  for(i = 0; i < (int)sizeof(num2); i++)
  {
    printf("0x%X \n",*ptr);
    ptr++;
  }
  printf("\n");

  printf("num3 = %11f\n", num3);
  ptr = (unsigned char *) &num3;
  for(i = 0; i < (int)sizeof(num3); i++)
  {
    printf("0x%X \n",*ptr);
    ptr++;
  }
  printf("\n");

  printf("char1 = %s\n",char1);
  ptr = (unsigned char *) &char1;
  for(i = 0; i < (int)sizeof(char1); i++)
  {
    printf("0x%X \n",*ptr);
    ptr++;
  }
  printf("\n");

  int number_array[] = {
  
    
0x48336C6C ,

0x6F205730 ,

0x726C640,
  };

  printf("%s\n", (char *)number_array);

  return 0;
}
