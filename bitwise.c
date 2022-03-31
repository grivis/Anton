#include <stdio.h>

char symb;
int i;

int main()
{

for (i = 0; i < 26; i++)
{
    //symb = 'A' + i;
    symb = 65 + i;
    putchar(symb);
    symb = symb | 0b00100000;
    putchar(symb);
    symb = symb & 0b11011111; // this is binary  
    putchar(symb);
    putchar(' ');

 }

putchar('\n');

}


/*

0b - is for binary

0x - is for hexadecimal

0100 0001 A

0110 0001 a

6th bit makes difference between lower case and upper case


Bitwise OR

0100 0001 | or
0010 0000    will set 1 to the specified bit

-----------
0110 0001  a
            & and
1101 1111   will reset the specified bit

----------
010 0001


XOR - exclusive OR ИСключающее ИЛИ

0 XOR 0 = 0
1 XOR 0 = 1
0 XOR 1 = 1
1 XOR 1 = 0 +++++  


*/