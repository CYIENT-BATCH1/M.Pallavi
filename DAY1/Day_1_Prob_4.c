4)Take a 6-digit number as input from the user and reverse the number. 
Make sure that the number does not include a ‘0’ in any of its digits.

#include <stdio.h>

int main()
{
    int x,r=0;
    printf("enter 6 digits\n"); 
    scanf("%d",&x);           //  Read the 6-digit number from user
    while(x>0){                 // loop runs when number is greater than 0 if it equals 0 exit the loop
    r=r*10+x%10;               // By using this we are shifting ten's place to hundread's place
    x=x/10;                     // By dividing number it remove 1 digit 
    }
    printf("the reversing number is %d",r);           //finally it will get reversed number
}
