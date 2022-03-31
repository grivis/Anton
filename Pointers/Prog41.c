#include <stdio.h>
#include <stdlib.h>

#include <math.h>
#include <string.h>


/*
Размеры массивов
Sizes of arrays

*/

void arrays(int *mass, char *stroka)
{

printf("sizeof(mass)=%d,\n", sizeof(mass));
printf("sizeof(stroka)=%d,\n", sizeof(stroka));
printf("strlen(stroka)=%d,\n", strlen(stroka));     
     
}


int main()
{
 int mass[] = {1, 2, 3, 4, 5};
 char stroka[] = "This is a test string";
 
 
 
 arrays(mass, stroka);
 
 
 
printf("sizeof(mass)=%d,\n", sizeof(mass));
printf("sizeof(stroka)=%d,\n", sizeof(stroka));
printf("strlen(stroka)=%d,\n", strlen(stroka));  
    

    
}
