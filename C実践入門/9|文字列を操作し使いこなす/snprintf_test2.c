#include <stdio.h>

int main(void)
{
  char msg[13] = "";
  char hello[14] = "hello world\n";
  char c;

  do
  {
  if(snprintf(msg,sizeof(msg), "%s",hello) > sizeof(msg) - 1)
    //snprintf()関数は、戻り値である出力したサイズとして'\0'を計上してくれないので、次のように'\0'の分を考慮しておく必要があります。
  {
      printf("Error: buffer overflow");
      continue;

  }
  printf("%s",hello);

  printf("q でやめる。Returnで続ける");
  c = getchar();
  }
  while (c != 'q');

  return 0;

}
