5)Right shift the value 0xFE by 3 bits and print the value

#include <stdio.h>

int main(){
    char n=0xFE;     //read input
    int pos=3;           //it indicates 3 times right shift
    int x=n>>pos;         
    printf("%x",x); 
}
