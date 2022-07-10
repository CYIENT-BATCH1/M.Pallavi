6)Write a program to convert Celsius form of temperature into Fahrenheit and vice versa. 
  
#include <stdio.h>

int main()
{
int fah,cel ;
printf("enter the temperature in celcius");  //read the temperature in celcius value from user
scanf("%d",&cel);
 fah=cel*9/5+32;                        //By using this we convert celcius to fahrenheit
 cel=5/9*(fah-32);                           //covert fahrenheit to celcius
 printf("celcius to Fahrenheit is %d\n",fah);
 printf("Fahrenheit to celcius is %d",cel);
}
