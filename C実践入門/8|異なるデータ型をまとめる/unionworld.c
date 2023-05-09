#include<stdio.h>
/*同じメモリ領域を共用する共用体
 *
 * 「struct」の部分が「union」に変わってる。
 * したのtag_worldという共用体でのnumとone_stringではアドレスを共用している*/

union tag_world
{
  int num[4];
  char one_string[16];
};

int main(void)
{
  union tag_world world;

  char one_string[] = "hello world\n";
  int i;


  for(i = 0; one_string[i] != '\0'; i++)
  {
    world.one_string[i] = one_string[i];
  }
  world.one_string[i] = one_string[i];

  printf("i = %d\n",i);

  printf("world.one_string is = %s",world.one_string);
  printf("world.num[] is = 0x%08x, 0x%08x, 0x%08x, 0x%08x\n", world.num[0],world.num[1],world.num[2],world.num[3]);
  printf("world.num is %p , one_string is %p\n",world.num, world.one_string);

  return 0;
}
