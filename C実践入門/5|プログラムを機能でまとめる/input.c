#include<stdio.h>

int main(void)
{
  char a[10];
  printf("input-->");
  fgets(a,sizeof(a),stdin);

    printf("%s",a);
}
