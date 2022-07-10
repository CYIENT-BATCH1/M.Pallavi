2)SWAPPING OF TWO NUMBERS WITH  USING THIRD VARIABLE

#include <stdio.h>
int main()
{
   int a=4,b=5,temp;
    temp=a;
    a=b;            //swapping the variables using temp variable
    b=temp;
   
   printf("After swapping a=%d and b=%d",a,b);
}
