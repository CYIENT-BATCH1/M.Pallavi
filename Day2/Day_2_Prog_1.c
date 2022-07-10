1)Consider the phone number of a person as user input and find the sum of its digits. 

#include <stdio.h>

int main()
{
    long int n,i=0,sum=0;             //initializing i and sum as 0
    printf("enter the phone number");
    scanf("%d",&n);                   //Read the input from user and store variable n
    while(i<=10){                 
        sum=sum+n%10;                   //by using modulus we are doing sum
        n=n/10;                          //By dividing we are elminate 1 digit
        i++;
    }
    
    printf("%d",sum);                  //pring total the sum of digits
}
