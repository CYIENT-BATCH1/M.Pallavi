3)POSITIVE OR NEGATIVE NUMBER USING CONDITIONAL OPERATOR

#include <stdio.h>

int main()
{
    int a;
    printf("enter value of a\n");
    scanf("%d",&a);                   //read the input from user
    a>=0?printf("Positive Number"):printf("Negative Number"); //codition satisfies Positive number
}
