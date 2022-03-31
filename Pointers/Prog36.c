#include <stdio.h>
#include <stdlib.h>

#include <math.h>
#include <string.h>


/*
Указатели
Pointers

*/

int main()
{
 int number=10;
 int *addr;
 
 /* addr - POINTER to  int data type*/
 
 printf("number = %d\n", number);
 
 addr = &number;
 /* & -- taking address operator */
 printf("addr = %p\n", addr);
 
 number = 100;
 printf("number = %d\n", number);
 
 *addr = 123;
 /* change th value stored at addr*/
 printf("addr = %p\n", addr);
 printf("number = %d\n", number);
    
  
    
    
}
