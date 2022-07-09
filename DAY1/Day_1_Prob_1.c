1)We'll say a number is special if it is a multiple of 11 or if it is one more than a multiple of 11. 
Print “SPECIAL” if the given non-negative number is special. Use the % "mod" operator.

#include <stdio.h>

void main()
{
    int val;
    printf("enter the value\n");
fflush(stdout);
    scanf("%d",&val);    //read input from user
      if(val%11==0)              //if val is equal to 0 then special
      printf("the number is SPECIAL");
  }
