#include <stdio.h>
#define NEWLINE putchar('\n');


int main()
{ int array[] = {1, 2, 3, 4, 5};
  int *ptr, *ptra, *ptrb;
  
  ptr = array;
  //имя массива содержит адрес начала
  ptrb = array;
  
  printf("%d ", *ptr); //1
  printf("%p \n", ptr);
  
  ptr++;
  printf("%d ", *ptr); //2
  printf("%p ", ptr);
  (*ptr)++;
  printf("%d \n", *ptr);
  
  ptr++;
  printf("%d ", *ptr);
  printf("%p ", ptr);
  (*ptr)++;
  printf("%d \n", *ptr);
  
  ptr++;
  printf("%d ", *ptr);
  printf("%p ", ptr);
  (*ptr)++;
  printf("%d \n", *ptr);
  
  ptr++;
  printf("%d ", *ptr);
  printf("%p ", ptr);
  (*ptr)++;
  printf("%d \n", *ptr);
  
//

NEWLINE

  for (int i=0; i<5; i++)
    printf("%d ", array[i]);

NEWLINE

while (ptr >= ptrb){
  printf("%d ", *(--ptr));
}
    
    }


/*

Префиксный инкремент/декремент
 ++abc
 Сначала измени, потом используй

 Потфиксный инкремент/декремент

abc++

Сначала используй, потом измени

*/