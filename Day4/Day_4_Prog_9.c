4) GIVEN NUMBER IS POWER OF 2 OR NOT

#include <stdio.h>

int main()
{
    int a,x,count=0;
    printf("enter a value\n");
    scanf("%d",&a);                //read the input from user
    while(a>0){
       x=a&1;                          //variable and with 1 it indicates whether 0 or 1
       a=a>>1;                           //remove last 1 bit
       if(x==1)                        
       count++;
    }
    if(count==1)
    printf("Number is 2 power n");         //if count=1 then it is 2 power n 
    else
    printf("number is not 2 power n");
}
