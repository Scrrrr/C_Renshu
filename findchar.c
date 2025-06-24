#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STRINGBUFF 256
#define WORDBUFF	10
#define DEBUG		 1

void RemoveLF(char *string)
{
	char *p = strchr(string,'\n');
	*p = '\0';
}

int main(void)
{
	char *string = malloc(sizeof(char)*STRINGBUFF);
	char *word = malloc(sizeof(char)*WORDBUFF);
	char *getchar;

	//memset(string,'\0',STRINGBUFF);
	//memset(word,'\0',WORDBUFF);

	printf("input centences:");
	fgets(string,STRINGBUFF, stdin);
	RemoveLF(string);

	printf("finding word:");
	fgets(word,WORDBUFF, stdin);
	RemoveLF(word);

	getchar = strstr(string,word);

#if DEBUG
	printf("Result:\n");

	printf("string  = %s\n",string);
	printf("word    = %s\n",word);
	
	if(!getchar)
	{
		printf("見つかりませんでした\n");
	}else{
		printf("見つかりました。\n");
		printf("見つかったワード:");

		for(char *p = getchar; *p != '\0' &&*p != ' '; p++)
		{
			printf("%c",*p);
		}
		putchar('\n');
	}
		
#endif

	free(string);
	free(word);
}
