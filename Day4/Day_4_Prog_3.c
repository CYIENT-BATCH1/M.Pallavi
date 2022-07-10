1)BIGGEST OF TWO NUMBERS USING CONDITIONAL OPERATOR

#include <stdio.h>
int main()
{
   int a,b;
  printf("enter the value of a\n");           
  printf("enter the value of b\n");
   scanf("%d %d",&a,&b);             //Read the two variables from user
    a>b?printf("a is greater"):printf("b is greater");   //by using conditional operator to find which is greater
}
