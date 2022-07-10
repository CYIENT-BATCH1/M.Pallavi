4)EVEN AND ODD NUMBER USING CONDITIONAL OPERATOR
*******************************************************************************/
#include <stdio.h>
int main()
{
   int a;
   printf("enter the number\n");
   scanf("%d",&a);                          //read the input from user
   a%2==0?printf("even number"):printf("odd number"); //if condition stisfies then even 
}
