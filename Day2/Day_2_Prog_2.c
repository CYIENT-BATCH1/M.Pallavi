2)A message ID is required to send data via CAN communication between ECU’s.
Accept a random 2-digit message ID from the user to send data.Keep in mind that
the given ECU only accepts binary form of the message ID.Write a program to convert
the 2-digit ID to binary form.  

#include <stdio.h>

int main()
{
    int id=23,r,i;
    for(i=7;i>=0;i--){          
        r=(id>>i)&1;        //By using right shift and with 1 we get 0 or 1 
    printf("%d",r);
    }
}
