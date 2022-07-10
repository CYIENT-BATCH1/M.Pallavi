Write program to clear(0) bits CIS, CM2, CM1, CM0 in register “CMCON” if bits
CHS3, CHS2, CHS1, CHS0 bits are set to 0x07 in register “ADCON0”
 
 #include <stdio.h>
int main()
{
    char a,n=0x1c; //0001 1100
    char n1=0x24; //0010 0100 
    n=n>>2;                                          //to calculate whether equal to 0x07 or not we should do right shift by 2 
    if(n==0x07){
      n1&=~((1<<0)|(1<<1)|(1<<2)|(1<<3));            //clear the bits in CMCON register if ADCONO register is equal to 0x07
    printf("%x",n1);  //20
    }
}
