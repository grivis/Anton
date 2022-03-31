#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){

	int* pm, *pmstart;

	int num = 10;

	pm = (int *)calloc(sizeof(int), num);
	// sizeof(int) - size of a unit
	// num - how many units
	
	for (int i=1; i<num; i++){
		*(pm) = i;
		printf("%p %d \n", pm, *pm);
		pm++;
	}


	putchar('\n');

	pm--;

	for (int j=0; j<9; j++){
		//printf("%d ", pmstart[i]);
		printf("%p %d \n", pm, *pm);
		pm--;
	}

	putchar('\n');

	return 0;
}