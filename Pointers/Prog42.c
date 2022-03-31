#include <stdio.h>
#include <stdlib.h>

#include <math.h>
#include <string.h>


/*
Delete spaces from strings
Удаление пробелов из строк

*/

void delspace(char *str)
{
   int ptr=0, dest=0;
   
   while(str[ptr])
   { if(str[ptr] != ' ') str[dest++] = str[ptr];
     ptr++;  }  
    
    str[dest] = 0; 
}

int main()
{
 char stroka[] = "This   is a te st   str ing   !";
 
 delspace(stroka);
 
 puts(stroka);   
    
  
}
