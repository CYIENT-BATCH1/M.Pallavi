Realize a function which has 2 arguments and 1 return value.
Argument 1 is Byte value, Argument 2 is bit position. Function has to flip 
the bit position (as per argument 2) in argument 1 byte value and return complete byte value.
  
  #include <stdio.h>
int fun(int arg1,int arg2){
   int n=arg1^(1<<arg2);       //flip the bits
    return n;
}
int main()
{
   printf("%x",fun(0x27,3));   //calling function
}
