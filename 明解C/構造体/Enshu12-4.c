#include<stdio.h>
#include<string.h>

#define NAME_LEN 64
#define NUMBER 5

typedef struct{
	char name[NAME_LEN];
	int hight;
	float weight;
	long schols;
 }Student;

void input(Student a[], int n) {
	for (int i = 0; i < n; i++)
	{
		printf("%d人目のプロファイルを入力してください。\n",i+1);
		printf("名前を入力してください。"); scanf("%s", &a[i].name);
		printf("身長を入力してください。"); scanf("%d", &a[i].hight);
		printf("体重を入力してください。"); scanf("%f", &a[i].weight);
		printf("奨学金を入力してください。"); scanf("%ld", &a[i].schols);
 }
}
void swap_student(Student* x, Student* y) {
	Student temp = *x;
	*x = *y;
	*y = temp;
}

void sort_by_height(Student a[], int n) {
	int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = n - 1; j > i; j--)
			if (a[j - 1].hight > a[j].hight)
				swap_student(&a[j - 1], &a[j]);
	}
}

void sort_by_name(Student a[], int left,int right) {
	int start;
	int i;
	char min[64];
	int i_min;
	char temp[64];
	if (left == right)
		return;

	for (start = left; start < right; start++) {
		int i = 0;
		i_min = start;
		strcpy(min, a[start].name);

		for (i = start; i <= right; i++)
			if (strcmp(min, a[i].name) > 0) {
				strcpy(min, a[i].name);
				i_min = i;
			}
		if (start != i_min) {
			strcpy(temp, a[start].name);
			strcpy(a[start].name,a[i_min].name);
			strcpy(a[i_min].name,temp);
		}
	}
}
int main(void) {
	int i;
	struct Student;
	Student std[NUMBER] = {
		{"Aatoki",	178,	64.2,	900},
		{"Dimori",	174,	51.2,	4300},
		{"Bomizuka",	184,	70.2,	9000},
		{"Eyojin",	177,	53.2,	88000},
		{"Cebukawa",	157,	46.2,	99999},
	};

	/*input(std, NUMBER);*/

	for (i = 0; i < NUMBER; i++) {
		printf("%-8s %6d%6.1f%7ld\n",
			std[i].name, std[i].hight, std[i].weight, std[i].schols);
	}

	int judge;
	puts("\nソート方法を選択してください。");
	puts("身長を昇順にソート【0】");
	puts("名前を昇順にソート【1】");
	scanf("%d", &judge);
	if (judge) 
	sort_by_name(std,0,NUMBER );
	else
	sort_by_height(std, NUMBER);
	


	puts("ソートしました。");
	for (i = 0; i < NUMBER; i++) {
		printf("%-8s %6d%6.1f%7ld\n",
			std[i].name, std[i].hight, std[i].weight, std[i].schols);
	}
}
