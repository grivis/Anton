#include <stdio.h>
#include <stdlib.h>

#include <math.h>
#include <string.h>


/*
Массивы как параметры функции
Arrays as parameters of functions

*/

void fff(int *a, int *b, int *c, int *mass, int n)
{    int i=0;
     
    *a=*a+1;
    *b=*b+2;
    *c=*c+3;
    printf("From fff() a= %d, b= %d, c=%d\n", *a, *b, *c);
    for(i=0; i<n; i++)
     mass[i] = mass[i] + 5; 
     
     }

int main()
{
 int x=10, y=20, z=30;
 int mass[] = {1, 2, 3, 4, 5};
 int n=5, i=0;
 
 printf("From main() x= %d, y= %d, z=%d\n", x, y, z); 
 
 fff(&x, &y, &z, mass, n);
 
 printf("From main() x= %d, y= %d, z=%d\n", x, y, z);
 
 
 for(i=0; i<n; i++)
   printf("%d ", mass[i]);    
  
    
    
}
