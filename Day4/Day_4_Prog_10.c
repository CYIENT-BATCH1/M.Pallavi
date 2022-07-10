1) FINDOUT SIZE FOR ALL DATATYPES AND VARIABLES

#include <stdio.h>

int main()
{
    int a;
    char b;
    float c;
    double d;
    long int e;
    short int f;
    printf(" size of data types %d %d %d %d %d %d %d\n",sizeof(int),sizeof(char),sizeof(float),
                 sizeof(double),sizeof( long int),sizeof(short int));
    printf("size of variables %d %d %d %d %d %d %d",sizeof(a),sizeof(b),sizeof(c),
                 sizeof(d),sizeof(e),sizeof(f));
} 
