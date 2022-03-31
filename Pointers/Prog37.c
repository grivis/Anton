#include <stdio.h>
#include <stdlib.h>

#include <math.h>
#include <string.h>


/*
Указатели на массивы
Pointers to arrays

*/

int main()
{
 int number=10, i=0;
 int *addr, *addrmass;
 int mass[] = {1, 2, 3, 4, 5};
 
 /* addr - pointer to type int */
 
 printf("number = %d\n", number);
 
 addr = &number;
 /* & -- taking address */
 printf("addr = %p\n", addr);
 
 number = 100;
 printf("number = %d\n", number);
 
 *addr = 123;
 /* change the content at addr*/
 printf("addr = %p\n", addr);
 printf("number = %d\n", number);
 
 addrmass = mass;
 /* we get the address of the array's starting point !!! NO & sign!*/
 
 *addrmass = 10;
 printf("addrmass = %p\n", addrmass); 
 addrmass++;
 
 *addrmass = 20;
 printf("addrmass = %p\n", addrmass); 
 addrmass++;
 
 *addrmass = 30;
 printf("addrmass = %p\n", addrmass); 
 addrmass++;
 
 *addrmass = 40;
 printf("addrmass = %p\n", addrmass); 
 addrmass++;
 
 for(i=0; i<5; i++)
  printf("%d ", mass[i]);
    
  
    
    
}
