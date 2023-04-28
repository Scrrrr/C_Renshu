#include<stdio.h>

int global_n;

void func_1(void)
{
    printf("form func_1: %d\n",global_n);

    return;
}

void func_2(void)
{
    printf("form func_2: %d\n",global_n);

    return;
}

void func_3(void)
{
    printf("form func_3: %d\n",global_n);

    return;
}
int main(void)
{
  
  global_n = 1;
  func_1();

  global_n = 10;
  func_2();

  global_n = 100;
  func_3();

}
