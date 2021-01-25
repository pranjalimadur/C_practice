#include<stdio.h>

void main()
{
    char c;

    printf("Enter a character:");
    scanf("%c",&c);

    switch(c)
    {
        case 'a': printf("This is a vowel");
                  break;
        case 'e': printf("This is a vowel");
                  break;
        case 'i': printf("This is a vowel");
                  break;
        case 'o': printf("This is a vowel");
                  break;
        case 'u': printf("This is a vowel");
                  break;
        default: printf("This is a consonant");
                 break;
    }
}