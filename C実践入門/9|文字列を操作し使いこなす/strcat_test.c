#include <stdio.h>
#include <string.h>

int main(void)
{
  char filename[] = "a";
  char ext[] = ".c";

  printf("filename is = %s\n",filename);

  strncat(filename, ext, sizeof(filename) - strlen(filename) - 1);
  filename[sizeof(filename) - 1]  = '\0';

  printf("filename is = %s\n",filename);

}
