5)5 balls are numbered with random 1-digit number each. 
Assign these numbers using user input. Print whether each ball is assigned odd or even number.

#include <stdio.h>

int main()
{
    int num,i;           //declaring variables            
    for(i=0;i<5;i++){
    printf("enter numbers\n");
    scanf("%d",&num);     //read the inputs
    if(num%2==0)                 //if condition satisfies it is even else odd
    printf("number is EVEN\n");
    else
    printf("number is ODD\n");
    }
}
