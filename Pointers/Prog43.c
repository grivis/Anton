#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


/*
Написать функцию расчета корней квадратного уравнения

int quadequ(double a, double b, double c, double *x1, double *x2)

Возвращает 0, если решения нет или 1, если решение есть

*/
int quadequ(double a, double b, double c, double *x1, double *x2)
{
 double d=0.0;
 
 if(a==0.0) return 0;
 
 d = b*b - 4.0 * a * c;

 printf("D= %.2lf \n", d);
 
 if(d<0.0) return 0;
 
 *x1 = (-b-sqrt(d))/2.0/a;
 *x2 = (-b+sqrt(d))/2.0/a;
 
 return 100;
    
}

int main()
{
 double a=1.0, b=4.0, c=1.0;
 double x1=0.0, x2=0.0;
 
 
 if(quadequ(a,b,c,&x1,&x2))
  printf("X1= %.2lf, X2= %.2lf\n", x1, x2);
 else printf("No solutions!\n");   
    
   
}

//IMPORTANT: include -lm module when compiling with gcc in Linux



