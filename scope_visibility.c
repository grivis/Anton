//#include<stdio.h>

/*
// variable with file scope
int x = 10;

void func()
{
	// x is available in func() function
	x += 10; // x now equals 10 + 10 = 20
	printf("Value of x is %d\n", x);
}

int main()
{
	func();
	// x is also available in main() function
	x += 30; // x now equals 20 + 30 = 50
	printf("Value of x is %d", x);
	return 0;
}

*/

/*

#include<stdio.h>

int main()
{
	int a = 5;
	int b = 10;
	
	{// inner block of code having block scope
		int sum = a + b;
		printf("Sum of a and b: %d", sum);
	}

	// the below statement will throw an error because 
	// sum variable is not available outside the scope of above block
	//printf("Sum of a and b: %d", sum);
	
	return 0;
}

*/

#include<stdio.h>

int findAge()
{  
    // the age variable is not accessible outside the function findAge() 
    // as it is having local scope to the function i.e. function scope
    int age=18;  

    return age; 
}
 
int main()
{

	int abc = findAge();

    printf("Age is %d", age);
     
    return 0;
}