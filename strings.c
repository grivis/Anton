#include <stdio.h>
#include <string.h>

int main(){

	char greeting1[6] = {72, 'e', 'l', 'l', 'o', 0};
	char greeting2[] = "Hello";

	printf("%s %ld \n", greeting1, sizeof(greeting1));
	printf("%s %ld \n", greeting2, sizeof(greeting2));

	printf("%s %ld \n", greeting1, strlen(greeting1));
	printf("%s %ld \n", greeting2, strlen(greeting2));

	for (int i=0; i<6; i++)
		printf("%d ", greeting1[i]);





	return 0;
}