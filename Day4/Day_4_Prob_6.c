6)HOW TO SET A BIT

#include <stdio.h>
int main()
{
    int a=0x12;//0001 0010 
    int pos=2;    //set a bit in this position
    a=a|(1<<pos);   //in this we are setting the bit
    printf("%x",a);  
}
