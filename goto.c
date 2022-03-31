#include <stdio.h>  

/*    
    int main()   
    {  
      int num,i=1;   
      printf("Enter the number whose table you want to print?");   
      scanf("%d",&num); //pass num by reference 
      table:   
        printf("%d x %d = %d\n",num,i,num*i);  
        i++;  
        if(i<=10)  
      goto table;    
    }

*/

/*
int main()   
    {  
      int num,i=1;   
      printf("Enter the number whose table you want to print?");   
      scanf("%d",&num); //pass num by reference 
      while (1){   
        printf("%d x %d = %d\n",num,i,num*i);  
        i++;  
        if(i>10) break; 
      }    
    }
*/

/*
int main()   
    {  
      int num,i=1;   
      printf("Enter the number whose table you want to print?");   
      scanf("%d",&num); //pass num by reference 
      while (i<=10){   
        printf("%d x %d = %d\n",num,i,num*i);  
        i++;   
      }    
    }

    */

int main()   
    {  
      int num,i=1;   
      printf("Enter the number whose table you want to print?");   
      scanf("%d",&num); //pass num by reference 
      for (i=1; i<=10; i++)   
        printf("%d x %d = %d\n",num,i,num*i);  
          
    }
