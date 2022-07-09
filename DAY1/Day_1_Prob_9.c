9)Implement basic logic gates using C (AND, OR, NOT). Consider the inputs: 0,0  0,1
1,0  1,1. 

#include <stdio.h>
int main()
{
   int x,y,z,z1,z2;
    printf("enter  x\n");
    printf("enter y\n");
    scanf("%d %d" ,&x,&y);            //Read 2 inputs from user
    z=x&y;                            //AND (&) operation and store in a variable
    z1=x|y;                            //OR (|) operation and store in a variable
    z2=!x;                              //NOT(!) operation and store in a variable
    printf("z=%d,z1=%d,z2=%d",z,z1,z2);      //printing all 3 variables
    return 0;
}
