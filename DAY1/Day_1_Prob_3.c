3)The entire area of a circular garden is to be covered with grass by a Gardener. 
The radius of the garden is given by the user input. Calculate the area that has to be covered.

#include <stdio.h>

int main()
{
   int area,radius;
   printf("enter the radius\n");  
   scanf("%d",&radius);           //Read the Radius input from user 
     area=3.14*radius*radius;        //3.14*r*r is ued to find area 
   printf("the area is %d",area);
}
