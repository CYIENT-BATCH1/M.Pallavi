1)Write a program to convert a data stream from Little Endian to Big Endian (you can take any 8 bit value or use 0b110101110)?

#include <stdio.h>
int main()
{
    int a=0x12345678;                               //initializing variable
    a=(a>>24)|((a&0xff)<<24)|(a>>8)&(0xff00)|((a&0xff00)<<8);          //converting Little endane to Big endane by using bitwise operators
    printf("%x",a);
}
