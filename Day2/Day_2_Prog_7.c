7)Find the number of leap years in the interval 1990-2022.
*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
int main()
{
int year=1990,count=0;
  while(year<=2022){
if(year%4==0){                //if year divide by 4 is equal to 0 then it is Leap year
count++;                             //if it is leap year then count increment by 1
printf("%d is a leap year\n",year);
}
else{
printf("%d is a not leap year\n",year);
}
year++;
}
printf("the count of leap years is %d",count);  //leap year count is calculated in between 1990 to 2022
}
