#include <stdio.h>

struct tag_coord
{
  double a;
  double b;
};

void print_coordinates(struct tag_coord [], int);

void print_coordinates(struct tag_coord c[] , int num)
{
  int i;
  for(i = 0; i < num; i++)
  {
    printf("c[%d].a = %f\n",i,c[i].a);
    printf("c[%d].b = %f\n",i,c[i].b);

    c[i].a = 12345.00;
    c[i].b = 54321.00;
  }
}

int main(void)
{
  int i;
  struct tag_coord coord[4];

  coord[0].a = 1.00;
  coord[0].b = 2.00;
  coord[1].a = 3.00;
  coord[1].b = 4.00;
  coord[2].a = 5.00;
  coord[2].b = 6.00;
  coord[3].a = 7.00;
  coord[3].b = 8.00;

  print_coordinates(coord, 4);

  for(i = 0; i < 4; i++)
  {
    printf("coord[%d].a = %f\n",i,coord[i].a);
    printf("coord[%d].b = %f\n",i,coord[i].b);
  }

  return 0;
}
