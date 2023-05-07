#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>
#include <string.h>

int GetMessageEncryptDecrypt(const char *prompt, const char *err_msg, int *flag)
{
  char InputString[32];
  char key;
  int length;

  printf("%s",prompt);
  if(fgets(InputString,sizeof(InputString),stdin) >= )
  {
    fseek(stdin, 0 , SEEK_END);
    printf("%s",err_msg);
    return -1;
  }

  printf("キーを入力してください:");
  key = getchar();

  if(key == EOF)
  {
    fseek(stdin, 0 , SEEK_END);
    printf("%s",err_msg);
    return -1;
  }

  length = strlen(InputString) - 1;

  errno = 0;

  putchar('\n');
  printf("+------Result------+\n");
  printf("| %s=%s",flag == 0 ? "暗号文" : "平文" ,InputString);
  printf("| ハッシュ値=%c\n",key);
  printf("| 文字数=%d\n",length);
  printf("| %13c\n",' ');

  for (int i = 0; i < length; i++) 
    printf("| %c → %c %*c|\n",InputString[i],InputString[i] ^ key, 11, ' ');

  printf("+------------------+\n");

  return 0;
}

int main(int argc, char *argv[])
{
  char select_c[3];
  char c;
  int select;

  do
  {
    puts("XOR 暗号化と複合を行うプログラムです");
    puts("このプログラムでは名前を暗号化または復号化することを想定としています!");
    puts("複合する→0  暗号化する→1");
    putchar(':');
      
    fgets(select_c,sizeof(select_c),stdin); 
    select = strtol(select_c,NULL,10);
  
    if(select)// 暗号化する
    { 
      if(GetMessageEncryptDecrypt("\n暗号化したい文を入力してください:" , "\n入力エラー\n", &select) == -1 )
          continue;
    }
    else // 複合する
    {
      if(GetMessageEncryptDecrypt("\n復号したい文を入力してください:\n","\n入力エラー\n", &select) == -1)
          continue;
    }
  
    //printf("やめるには[q]を、続けるには[Return]を押してください\n");
  
    printf("Input q[return] to quit, [return] to continue.\n");
    c = getchar();
  
    if(c == EOF)
      fseek(stdin, 0, SEEK_END); //BSDではこれがないとエラーになる
  
  }while(c != 'q');

  return 0;
}
