1)Find common elements in three sorted arrays, 3 array values are given as input to program.

#include<stdio.h>
int main(){
    int a[5]={1,8,2,4,6};           //initializing 3 arrays
    int b[5]={1,2,3,6,8};
    int c[5]={2,3,6,8,1};
    int i,j,k;
    for(i=0;i<5;i++){             //in 2 arrays we are searching the commom element
        for(j=0;j<5;j++){
            if(a[i]==b[j])
        for(k=0;k<5;k++){               //comparing that element with array 3 
            if(b[j]==c[k])
            printf("%d",c[k]);           //printing the common element in 3 arrays        
        }
        }
    }
}
