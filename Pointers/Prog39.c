#include <stdio.h>
#include <stdlib.h>

#include <math.h>
#include <string.h>


/*
Параметры функции
Parameters of functions

*/

void fff(int *a, int *b, int *c)
{
    *a=*a+1;
    *b=*b+2;
    *c=*c+3;
    printf("From fff() a= %d, b= %d, c=%d\n", *a, *b, *c); 
     
     }

int main()
{
 int x=10, y=20, z=30;
 
 printf("From main() x= %d, y= %d, z=%d\n", x, y, z); 
 
 fff(&x, &y, &z);
 
 printf("From main() x= %d, y= %d, z=%d\n", x, y, z);    
  
   
    
}
