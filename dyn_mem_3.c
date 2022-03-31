#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){

	int* pm, *pmstart;

	int num = 100;

	pm = calloc(sizeof(int), num);
	// sizeof(int) - size of a unit
	// num - how many units
	printf("Pointer %p\n", pm);
	
	srand(time(0));

	for (int i=0; i<100; i++)
		pm[i] = rand()%100;


	for (int i=0; i<100; i++)
		printf("%d ", pm[i]);

	putchar('\n');

	//we want more!

	num = 150;

	pm = realloc(pm, num*sizeof(int));
	printf("Pointer %p\n", pm);

	for (int i=100; i<150; i++)
		pm[i] = rand()%100;

	for (int i=0; i<150; i++)
		printf("%d ", pm[i]);

	putchar('\n');




	return 0;
}