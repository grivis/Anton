#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){

	int* pm, *pmstart;

	int num = 100;

	pm = malloc(sizeof(int)*num);
	// sizeof(int) * num - amount of memory
	
	printf("Pointer %p\n", pm);
	
	srand(time(0));

	for (int i=0; i<90; i++)
		pm[i] = rand()%100;


	for (int i=0; i<100; i++)
		printf("%d ", pm[i]);

	putchar('\n');

	




	return 0;
}

//vectors in C++
//assert in C++