#include<stdio.h>
#include<stdlib.h>

#define NUMBER 8
/*é¿ç€ÇÕ7å¬Ç…Ç»ÇÈ*/

int main(void) {
	char str[NUMBER + 1][32];
	int a[NUMBER];
	int max;
	int i, j;


	for (i = 0; i < (NUMBER - 1); i++) {
		printf("number%d:", i+1);	
		fgets(str[i], 32, stdin);		
		a[i] = atoi(str[i]);
	}

	max = a[0];

	for (j = 0; j < (NUMBER - 1); j++) {
		if (max < a[j])
			max = a[j];
	}
				
	printf("max = %d\n", max);
		
	return 0;
 }
