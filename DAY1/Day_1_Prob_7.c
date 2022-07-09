7)Find whether a given 10-digit number is palindrome or not.
(HINT: Any number is said to be a palindrome if the original number and the reverse
of the original number are the same.)

#include <stdio.h>

int main()
{
   long int x=12345678912,r=0,temp=x;
   while(x>0){                        //using while loop if value is greater than 0 run the process
   r=r*10+x%10;              //here we are reversing the number 
   x=x/10;
   }
   if(r==temp)                    //if original value and the reversed value is equal then Palindrome
   printf("palindrome");
   else
   printf("not palindrome");
}
