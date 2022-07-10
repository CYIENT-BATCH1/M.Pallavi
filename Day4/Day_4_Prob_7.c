2)HOW TO CLEAR A BIT

#include <stdio.h>

int main()
{
    int a=0x25;//0010 0101  
    int pos=2; 
    a=a&~(1<<pos);  //we are clear the bit at position 2 
    printf("%x",a);
}
