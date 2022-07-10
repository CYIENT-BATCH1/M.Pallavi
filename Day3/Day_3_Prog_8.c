8)Write program to check given i/p by user is alphabet or not alphabet using conditional operator

#include <stdio.h>
int main()
{
    char ch;
    printf("enter the character\n");          //read a charector
    scanf("%c",&ch);
   ((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))?printf("Alphabet"):printf("not alphabet");//if condition satisfies prints alphabet
}
