3)Write a program to reverse a 3-digit number which is entered from keyboard. 

#include <stdio.h>
int main()
{
    int num,r=0;
    printf("enter the digits");    
    scanf("%d",&num);                //read the 3-digit value from user
    while(num>0){                      
    r=r*10+num%10;                   //It will get the reverse number since we are multiplying 10and sum withlast digit
    num=num/10;
    }
    printf("%d",r);                    //printing reverse number
}
