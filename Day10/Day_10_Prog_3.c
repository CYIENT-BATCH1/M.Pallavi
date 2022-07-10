3. Write a program to Implement ”Selection Sort” using Recursion for given elements 
(Number elements will vary, so make it as configurable item)
How Selection sort works is explained below.

#include <stdio.h>
int sel_sort(int a[],int len){              
    for(int i=0;i<=len-1;i++){          //using for loop we are comparing two elements  
        for(int j=i+1;j<=len;j++){
            if(a[i]>a[j])                  //if condition satisfies then swap two elements using temp variable
                int temp=a[i];
                     a[i]=a[j];
                      a[j]=temp;
        }
         
    }
}
int main()
{
    int a[]={20,12,10,15,2};          //initializing array
   int len=5;                           //length of array
    sel_sort(a,5);              //function call
    for(int i=0;i<5;i++)
    printf("%d  ",a[i]);
    return 0;
}
