#include<stdio.h>

struct tag_coord 
{
  double x; //8Byte
  double y; //8Byte
};

int main(void)
{
  double num;
  double num_array[4];
  struct tag_coord coord;
  struct tag_coord coord_array[4];

  printf("size of num is %zu\n",sizeof num);
  printf("size of num_array is %zu\n",sizeof num_array);
  printf("size of coord is %zu\n",sizeof coord);
  printf("size of coord_array is %zu\n",sizeof coord_array);
//coord_arrayはstruct tag_coord型4要素の配列なので16x4で64Byte

  return 0;
}
