10)Consider the weights of three people as user input. Find the heaviest among them and print it.

#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter weights\n");
    scanf("%d %d %d",&a,&b,&c);            //read three inputs from user
    a>b&&a>c?printf("a is largest"):b>c&&b>a?printf("b is largest"):printf("c is largest");  //By using ternary condition,before colon it takes true after colon false
}
