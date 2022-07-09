Consider a character input from a user and print if it is a vowel or consonant. 
  
#include <stdio.h>

int main()
{
    char a;
    printf("enter the charector\n");
    scanf("%c",&a);                    //Read charector from user
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='i'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U') //check it c
    printf(" charector is VOWELS");   //condition satisfies then vowel
    else
    printf("charector is CONSONENT");
    return 0;
}
