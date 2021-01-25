#include<stdio.h>
#include<string.h>

void main()
{
    //  int i=0;
    // int arr[]={1,2,3,4,5};
    // for(i=1;i<=5;i++)
    //     printf("Hello World!\n");

    // //for(int n : arr)
    // //    printf("%d", n);

    // for(;;)
    //     printf("hello world\n");

    // while(i<=5)
    // {
    //     printf("Hello world!\n");
    //     i++;
    // }

    // do
    // {
    //     printf("Hello world\n");
    //     i++;
    // } while (i<5);

    // for(int i=0;i<=2;i++)
    //     for(int j=0;j<=2;j++)
    //         for(int k=0;k<=2;k++)
    //             printf("%d : %d : %d\n",i,j,k);

    //  int number,result=1;

    //  printf("enter a number: ");
    //  scanf("%d",&number);

    //  for(int i=number;i>0;i--)
    //  result=result*i;

    //  printf("the factorial is: %d",result);
    
    // int a=0,b=1,c=0, number;

    // printf("enter a number: ");
    // scanf("%d",&number);
    // printf("%d\n %d\n",a,b);
    // for(int i=0;i<number;i++)
    // {
    //     c=a+b;
    //     printf("the result is %d\n",c);
    //     a=b;
    //     b=c;
    // }

    // int n,s=0,r,orgn;

    // printf("Enter a number: ");
    // scanf("%d",&n);
    // orgn=n;

    // while(n>0)
    // {
    //     r=n%10;
    //     s=s*10+r;
    //     n=n/10;
    // }

    // if(orgn==s)
    // {
    //     printf("The number is palindrome");
    // }
    // else{
    //     printf("not a palindrome");
    // }

    // int n, sum=0,r;

    // printf("Enter a number:");
    // scanf("%d",&n);

    // while(n>0)
    // {
    //     r=n%10;
    //     sum=sum+r;
    //     n=n/10;
    // }
    // printf("The sum is: %d",sum);

    char name[20];
    int i,j,temp;

    printf("Enter a name: ");
    gets(name);
    i=0;
    j=strlen(name)-1;
    while(i<j)
    {
        temp=name[i];
        name[i]=name[j];
        name[j]=temp;
        i++;
        j--;
    } 

    printf("String reverse is %s",name);     
    
}