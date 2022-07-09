6)Students with roll numbers 1-9 are seated in ascending order in an examination hall. 
There has been a slight mistake in their seating arrangement where two consecutive roll numbers 
have been swapped.Choose these two consecutive numbers as per your choice and swap them back in their right places
according to ascending order.
  
#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,i;
    printf("enter 9 digits\n");
    scanf("%d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i);  //reading 9 inputs from user
    printf("After swapping\n");
   a=a+b;                      //as per my choice i am choosen a and b should be sawpped
   b=a-b;
   a=a-b;
    printf("%d %d %d %d %d %d %d %d %d",a,b,c,d,e,f,g,h,i);  //finally swapped values
}
