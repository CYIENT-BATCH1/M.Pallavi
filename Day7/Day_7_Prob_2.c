Write a code to swap even bits with odd bits in unsigned long variable(uint64).
Example: bit 0 with bit 1; bit 2 with bit 3; bit 4 with bit

#include <stdio.h>
int main()
{
  unsigned long int x=0xaaaaaaaa,y=0x55555555; //read input 1010 0101
  int z;
  z=(x>>1)|(y<<1); //Right shift variable for 1 time similarly left shift by 1 to convert odd place to even  place          
  printf("%x",z);
}time
