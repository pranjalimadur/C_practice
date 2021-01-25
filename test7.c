#include<stdio.h>
#include<ctype.h>

void main()
{
    char c;

    printf("Entre a character:");

    scanf("%c",&c);

    if(c>96 && c<129)
    {
         c=toupper(c);
         printf("Reversion of this alphabet is: %c",c);
    }   

    else if(c>64 && c<91)
    {
        c=tolower(c);
        printf("Reversion of this alphabet is: %c",c);
    }
    
}