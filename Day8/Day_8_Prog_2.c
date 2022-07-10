Write a program in C to sort an array using Pointer. The sample output must be as below

#include<stdio.h>
void sort(int n,int* p)
{
    int i,j,temp;
    for (i=0;i<n;i++) {
      for (j=i+1;j<=n;j++) {              //comparing 1st and 2nd element
             if(*(p+j)<*(p+i)){             //if 2nd is less than first then swap
                temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }
    }
    for (i=0;i<n;i++)
        printf("%d ",*(p+i));
}
int main()
{
    int n=5;
    int a[]={25,45,89,15,82};
    sort(n,a);               //calling function
    return 0;
}
