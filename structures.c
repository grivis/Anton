#include <stdio.h>
#include <math.h>
#include <string.h>
#define NEWLINE putchar('\n'); 


int main()
{
    struct person
    {
       char fio[100];
       int birth;
       double salary;           
                 } team[10], tmp, tmpteam[10];
    int num, i;
    
    
    
    printf("Сколько сотрудников? ");
    scanf("%d", &num);
    
    for(i=0; i< num; i++)
    {
       printf("Введите фамилию >> ");
       scanf("%s", team[i].fio);
       NEWLINE
       printf("Введите год рождения >> "); 
       scanf("%d", &team[i].birth);
       NEWLINE
       printf("Введите оклад >> "); 
       scanf("%le", &team[i].salary);
       NEWLINE     
             }
    for(i=0; i< num; i++)
    {
       printf("%s ", team[i].fio);
       printf("%d ", team[i].birth);
       printf("%f ", team[i].salary);
       NEWLINE     
             }
             
    tmp = team[0];
    team[0] = team[1];
    team[1] = tmp;
    
    for(i=0; i< num; i++)
    {
       printf("%s ", team[i].fio);
       printf("%d ", team[i].birth);
       printf("%f ", team[i].salary);
       NEWLINE     
       }
             
    
    return 0;
    
    
    }