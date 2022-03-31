
#include<stdio.h>

//n! = 1*2*3*4...*n;

long long int frec(int n){

	if(n<2) return 1;

	else return n * frec(n-1);
}

int main()
{

	long long int x = 20;

	printf("Factorial is %lld", frec(x));
	

	return 0;
}