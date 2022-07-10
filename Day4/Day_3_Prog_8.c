3)HOW TO COMPLIMENT A BIT 

#include <stdio.h>

int main()
{
    int a=0x24;//0010 0100
    int pos=4;
    a=a^(1<<pos);      //using ex-or(^) at position 4 
    printf("%x",a);
}
