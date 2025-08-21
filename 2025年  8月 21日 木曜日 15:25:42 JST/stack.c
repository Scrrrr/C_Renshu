#include<stdio.h>

int array[32] = {'\0'};
static int index;

void push(int n)
{
	array[index] = n;
	index++;
}

void pop(void)
{
	array[index - 1] = '\0';
	index--;
}

void ShowStack(void)
{
	printf("array:");
	for(int i = 0; array[i] != '\0'; i++)
	{
		printf("%d",array[i]);
		if(array[i + 1] != '\0')
			putchar(' ');
	}
	putchar('\n');
}

int main(void)
{
	push(3);
	push(4);
	push(100);
	pop();
	push(100);
	push(102);
	pop();
	pop();
	push(-1);
	push(0);
	push(0);
	push(0);
	ShowStack();
}


