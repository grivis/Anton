#include <stdio.h>

int main(){

	const int first = 10;
	short int second = 20;
	long int third = 1000;
	long long unsigned fourth = 1000000;

	printf("%ld %ld %ld %ld\n", sizeof(first), sizeof(second), sizeof(third), sizeof(fourth));

	//first = 99; will not work!



	return 0;
}