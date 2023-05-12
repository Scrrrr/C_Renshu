#define test '2'

#include <stdio.h>
#include <string.h>

int main(void)
{
  if(test == '1')
  {
    printf("foo bar = %d\n",strcmp("foo","bar"));
    printf("bar foo = %d\n",strcmp("bar","foo"));
    printf("bar bar = %d\n",strcmp("bar","bar"));
  }else{
    printf("foo bar = %d\n",strncmp("foo","bar",2));
    printf("hello helloapple = %d\n",strncmp("bar","bao",2));
    printf("brr bao = %d\n",strncmp("bar","foo",2));
    printf("bar bar = %d\n",strncmp("bar","bar",2));
  }

}
/*
 *  LinuxやMacOSでは4や-4んど普通の数が返されることもあります。
 *  これは、strcmp()関数が、比較した大きい文字列から小さい文字列
 *  を引いた値('f'(0x66) -'b'(0x62))を返す実装になっているからです。
 *
 *  そのため、==1や==-1で比較せず、>0や<0で比較するようにしましょう。
 * */
