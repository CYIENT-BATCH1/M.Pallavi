I). Write program to set (1) bits CIS, C2OUT, C1OUT in register “CMCON” 
if bits CHS3, CHS2, CHS1 bits are set to 0x06 in register “ADCON0”

#include <stdio.h>
int main()
{
  int a=0x1a,x; // 0001 1010   
  int b=0x23;
  a=a>>2;                                    //right shift by 2 to know it is equivalent to 0x06 or not                        
  if(a==0x06){
      b|=((1<<7)|(1<<6)|(1<<3));        //if ADCONA bits are equal to 0x06 then clear 3rd,6th and 7th bits
      printf("%x",b);
  }
  }
