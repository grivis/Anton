#include <stdio.h>
int main()
{
    int var =10;
    int *p;
    p= &var;

    printf ( "Address of var is: %p", &var); //address of var
    printf ( "\nAddress of var is: %p", p); // content of pointer p address of var

    printf ( "\nValue of var is: %d", var); // 10 
    printf ( "\nValue of var is: %d", *p); // 10 
    printf ( "\nValue of var is: %d", *( &var));  // 10

    /* Note I have used %p for p's value as it represents an address*/
    printf( "\nValue of pointer p is: %p", p); // hex value of content of pointer p 
    printf ( "\nAddress of pointer p is: %p", &p); //hex value of adress of p

    return 0;
}