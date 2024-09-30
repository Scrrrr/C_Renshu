#include <stdio.h>

#define HL 150
#define HU 180
#define H_STEP 5
#define WL 50
#define WU 75
#define W_STEP 5

int main(void)
{
  int height,weight;

  putchar('\t');

  for(weight = WL; weight <= WU; weight += W_STEP)
    printf("%d[kg]\t", weight);

  putchar('\n');

  for(height = HL; height <= HU; height += H_STEP)
  {
    printf("%d[cm]", height);
    for(weight = WL; weight <= WU; weight += W_STEP)
      printf("\t%6.1f", weight / ((height/100.) * (height/100.)));
    putchar('\n');
  }
}
