1)SWAPPING OF TWO NUMBERS WITH OUT USING THIRD VARIABLE

#include <stdio.h>
int main()
{
   int a=4,b=5;
   a=a+b;        //these are used swap the variable 
   b=a-b;        
   a=a-b;          
   printf("After swapping a=%d and b=%d",a,b);
}
