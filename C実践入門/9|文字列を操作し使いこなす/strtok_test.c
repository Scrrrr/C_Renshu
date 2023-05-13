#include <stdio.h>
#include <string.h>

int main(void)
{
 char databese[] =    "5400016 , OSAKA FU , OSAKA SHI CHUO KU , KANZAKICHO"
                      "5410057 , OSAKA FU , OSAKA SHI CHUO KU , KITAKYUHOJIMACHI"
                      "5400023 , OSAKA FU , OSAKA SHI CHUO KU , KITASHIMMACHI"
                      "5410041 , OSAKA FU , OSAKA SHI CHUO KU , KITAHAMA"
                      "5400031 , OSAKA FU , OSAKA SHI CHUO KU , KITAHAMAHIGASHI"
                      "5410056 , OSAKA FU , OSAKA SHI CHUO KU , KYUTAROMACHI"
                      "5420072 , OSAKA FU , OSAKA SHI CHUO KU , KOZU"
                      "5410043 , OSAKA FU , OSAKA SHI CHUO KU , KORAIBASHI"
                      "5400018 , OSAKA FU , OSAKA SHI CHUO KU , KOKAWACHO"; 
                       
                       
                       

  char *p1, *p2;
  char *token;

  p1 = databese;

  do
  {
    p2 = strchr(p1,'\n');

    if(p2 == NULL)
    {
      p2 = &databese[strlen(databese) - 1];
    }else{
      *p2 = '\0';
    }

    printf("%s\n",p1);

    token = strtok(p1, ",");
    printf("code = %s\n",token);

    token = strtok(p1,",");
    printf("addr2 = %s\n",token);

    token = strtok(NULL, ",");
    printf("addr1 = %s\n",token);

    token = strtok(NULL, ",");
    printf("prefecture = %s\n",token);

    printf("\n");
    p1 = p2 + 1;
  }while(*p1 != '\0');

    return 0;

}
