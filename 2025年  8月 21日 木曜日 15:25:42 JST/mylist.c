#include<stdio.h>
#include<string.h>

struct ARRAY{
	int no;
	char data[32];
};

int AddData(struct ARRAY a, static char data[32])
{
	strcpy(a->data,data);
	return 0;
}

int main(void)
{
	struct ARRAY array[32];
	if(AddData(array[0],"yuduki"))
		printf("error");
}
