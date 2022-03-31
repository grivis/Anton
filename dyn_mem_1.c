#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){

	int* pm;

	int num = 10;

	pm = calloc(sizeof(int), num);
	// sizeof(int) - size of a unit
	// num - how many units
	//int array[10];

	*pm = 1;
	//first element of the dynamic array
	*(pm+1) = 2;
	*(pm+2) = 3;
	*(pm+3) = 4;
	*(pm+4) = 5;
	*(pm+5) = 6;

	for (int i=0; i<10; i++)
		printf("%d ", *(pm+i));

	putchar('\n');

	for (int i=0; i<6; i++)
		printf("%d ", pm[i]);

	putchar('\n');

	return 0;
}