 I). Set the register SSPSTAT value such a way that bit CKE, P and S bit are cleared (0), without disturbing the other bits.
II). Find out the value of UA, BF, SMP bits in SSPSTAT register if the value of the register is 0x55
  
  #include <stdio.h>
int main()
{
  int n=0x3f; //0011 1111   
   char b=0x55; //0101 0101
      n&=~((1<<3)|(1<<4)|(1<<6));        //clear the bits 3rd,4th,6th using & operator
    printf("%x\n",n);          //(1)  
     printf("%x %x %x",(b>>7)&1,(b>>1)&1,(b>>0)&1);  //(2)  0 0 1
}
