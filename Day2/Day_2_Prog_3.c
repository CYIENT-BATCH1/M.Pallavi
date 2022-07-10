3)It was Raj's first day at school. His teacher asked the students to meet every other student in the class and to
introduce themselves. The teacher asked them to give handshakes when they meet each other.If there are ‘n’ 
number of students in the class then find the total number of handshakes made by the students.

#include <stdio.h>

int main()
{
int n,x;
printf("total number of students are ");
scanf("%d",&x);                     //Reading the input from user
n=x*(x-1);                    //number of hand shakes calculate by formula
printf("the total number of handshaking is %d",n);
}
