4)Kishore bought ‘n’ number of lottery tickets. His lucky number is 3 so he wants to separate all the tickets 
that have the number 3 in them.Find how many such lucky tickets are found in the ‘n’
number of tickets purchased by Kishore.

#include <stdio.h>

int main()
{
int n[10]={3,2,3,3,3,4,5,2,3,7}; 
int count=0,i=0;             
for(i=0;i<sizeof(n);i++){        //by using for loop we are moving for next index by using i 
    if(n[i]==3)                       //if value is equal to 3 then count will be incremented
    count++;
}
printf("the lucky tickets of kishore is %d",count); //print total count of lucky tickets
}
