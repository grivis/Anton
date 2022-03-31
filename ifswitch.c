
#include <stdio.h>
#include <string.h>

int main(){

	int x = 7;

	if (x>20) printf("%s\n", "Greater than 20");

	else if (x>10) printf("%s\n", "Greater than 10");

	else if (x>5) printf("%s\n", "Greater than 5");

	int day = 5;

	switch( day*2 )
{
	case 1:
			printf("%s\n", "Monday");
			break;
	case 2:
			printf("%s\n", "Tuesday");
			break;
	case 3:
			printf("%s\n", "Wednesday");
			break;
	default:
			printf("%s\n", "I dont know this day!");;
			break;
}


printf("%s\n", "And that is it, folks!");




return 0;
}