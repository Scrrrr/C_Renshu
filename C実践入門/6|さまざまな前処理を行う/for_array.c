#include<stdio.h>

int main(void)
{
  int number_array[] = {1,2,3,4,5,6,7,8,9,10};
  int ans = 0;

  for(int i = 0; i < sizeof(number_array) / sizeof(number_array[0]); i++){
    ans += number_array[i];
  }

  printf("sizeof(number_array) = %ld\n",sizeof(number_array));
  printf("sizeof(number_array[0]) = %ld\n",sizeof(number_array[0]));
  printf("%d\n",ans);
}
