#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int input(char *string,const int len)
{
	fgets(string,len,stdin);
	char *p = strchr(string,'\n');
	*p = '\0';

	return 0;
}

int main(void)
{
	char string[32];
	printf("input:");
	input(string,sizeof(string)/sizeof(string[0]));
	printf("%s",string);
}
