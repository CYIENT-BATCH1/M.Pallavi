2)Write a program to calculate the sum of the first and the second last digit 
of a 5-digit number entered from the keyboard.

#include <stdio.h>
int main()
{
    int n,a,b,x=n,c,sum;
    printf("enter value");              //read the 5 digit value
    scanf("%d",&n);
    a=n%10;                              //by this it will get last digit
    n=n/10;                               //It will remove last digit 
    b=n%10;                                  //It will get second last digit and store in a variable
    printf("second last digit %d\n",b);
    x=n;
    while(x>0){                                 // by using while condition it will get the first digit by using modulus and divide
       c=x%10;                          
       x=x/10;
    }
    sum=b+c;                                         //sum of second last digit and first digit and print the value
printf("first digit %d\n",c);
printf("sum of two digits %d",sum);
}
