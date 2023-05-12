#include <stdio.h>
#include <string.h>

int main(void)
{
  char databese[] = "064-0393,ASAHIGAOKA,CHUO-KU SAPPPORO-SHI,"
                    "HOKKAIDO\n023-1123,ODORIHIGASHI,CHUO-KU "
                    "SAPPORO-SHI,HOKKAIDO\n023-3384,"
                    "ODORINISHI(1-19-CHOME),CHUO-KU"
                    "SAPPORO-SHI,HOKKAIDO";

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
