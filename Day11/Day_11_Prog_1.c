1. Write a program to do binary search in a sorted array. Program should take input of sorted values and search value. 
(Make number of elements as configurable value)
How binary search works is explained below.

#include<stdio.h>
int binarySearch(int array[], int x, int low, int high) {        
  while(low<=high) {
    int mid=(low+high)/2;         //calculating mid value
    if(array[mid]==x)
      return mid;                // Mid value to search value return mid
    if(array[mid]<x)
      low=mid+1;                //mid less than search then add 1 else substract 1
      else
      high=mid-1;                 
  }
  return 0;
}
int main(void) {
  int array[]={2,5,8,12,16,23,38,56,72,91};      //initializing array
  int n=sizeof(array)/sizeof(array[0]);            //calculating size of the array
  int x=23;
  int result=binarySearch(array,x,0,n-1);          //function call and store it in another variable
  if(result==0)
    printf("Not found");                            
  else
    printf("Element is found at index %d", result);
  return 0;
}
