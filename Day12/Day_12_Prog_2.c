 Find empty strings in an array of strings (Array of strings will be given as input to program) and print the position of array where empty string is present.
 And replace the empty string array element as “CYIENT”
 #include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *a[]={"hello","hii","good","morning"," "};     //initializing charector array
    int size=sizeof a/sizeof(a[0]);                       //calculating size of array
    int pos=0;
    int i;
    for(i=0;i<5;i++){
        if(a[i]==" "){                             //if string is empty we store CYIENT in that empty string
         a[i]="cyient";
         printf("%s ",*(a+i));
         pos=i;                                      //storing index in another variable
        }
    } 
     printf("\nempty string pos is %d\n",pos);              //printing position of empty string which we placed CYIENT
    return 0;
}
