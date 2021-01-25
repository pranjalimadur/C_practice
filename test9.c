#include<stdio.h>

void main()
{
    int n1,n2;
    

    printf("Enter two numbers:");
    scanf("%d %d",&n1,&n2);

    if(n1>n2)
    {
        printf("%d is greater and %d is smaller",n1,n2);
    }
    else
    {
        printf("%d is greater and %d is smaller",n2,n1);
    }
}