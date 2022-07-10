Set the register T0CON value such a way that bit TMR0ON and PSA bit are set (1), without disturbing the other bits.
II). Find out the value of T0PS2, T0PS1, T0PS0 bits in T0CON register if the value of the register is 0xF3
  
  #include <stdio.h>
int main()
{
  int n=0x34; //0011 0100
   int b=0xF3; //1111 0011
      n|=(1<<3)|(1<<7);           //set 3rd and 7th bit 
    printf("%x\n",n);          //(1)
     printf("%x %x %x",(b>>2)&1,(b>>1)&1,(b>>0)&1);  //(2)
}
