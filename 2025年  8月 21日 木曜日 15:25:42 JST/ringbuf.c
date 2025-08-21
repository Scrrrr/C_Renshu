#include<stdio.h>
#include<limits.h>

#define BUFF 32
static int head;
static int tail;

void enqueue(int *array,const int n)
{
	array[head] = n;
	head++;
}

void dequeue(int *array)
{
	tail++;
}

void showqueue(int *array)
{
	for(int i = tail; i < head; i++)
	{
		printf("%d ",array[i]);
	}
	putchar('\n');
	
}

int main(void)
{
	int array[BUFF];

	enqueue(array,2);
	enqueue(array,3);
	enqueue(array,4);
	dequeue(array);
	showqueue(array);
}
