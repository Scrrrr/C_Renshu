#include <stdio.h>

struct tag_coord
{
  double x;
  double y;
};

void print_coordinates(struct tag_coord *);

void print_coordinates(struct tag_coord *c)
{
  printf("c->x = %f\n",c->x);
  printf("c->y = %f\n",c->y);

  (*c).x = 12345.00;    
  (*c).y = 54321.00;
  //このアロー演算子も配列の*(double_array + 1)とdouble_array[1] が等価であるように
  //実はc->xは(*c).x /*! と書いたりできます。
}

int main(void)
{
  struct tag_coord coord;

  coord.x = 1.00;
  coord.y = 2.00;

  print_coordinates(&coord);

  printf("c->x is %f\n",coord.x);
  printf("c->y is %f\n",coord.y);

  return 0;
}
