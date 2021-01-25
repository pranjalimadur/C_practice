#include<stdio.h>

void main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    if(n>0)
    {
        printf("Number is positive");
    }
    else
    {
        printf("Number is negative");
    }
}