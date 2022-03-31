#include <stdio.h>
#include <stdlib.h>

#include <math.h>
#include <string.h>


/*
Указатели на массивы
Pointers to arrays
Doubles

*/

int main()
{
 double number=10;
 int i=0;
 double *addr, *addrmass;
 double mass[] = {1, 2, 3, 4, 5};
 
 /* addr - указатель на тип int */
 
 printf("number = %.2lf\n", number);
 
 addr = &number;
 /* & -- оператор взятия адреса */
 printf("addr = %p\n", addr);
 
 number = 100;
 printf("number = %.2lf\n", number);
 
 *addr = 123;
 /* изменить содержимое по адресу addr*/
 printf("addr = %p\n", addr);
 printf("number = %.2lf\n", number);
 
 addrmass = mass;
 /* получили адрес начала массива !!! Нет знака &*/
 
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

 addrmass = mass;
 
 for(i=0; i<5; i++){
 	printf("%.2lf ", *addrmass);
 	addrmass++;
 }
  
    
   
    
    
}
