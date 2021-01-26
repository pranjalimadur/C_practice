#include<stdio.h>
#include<string.h>

void main()
{
    // int n1,n2;
    // float m;

    // printf("Enter two numbers: ");
    // scanf("%d %d",&n1,&n2);
    // m=(n1+n2)/2;
    // printf("Avg is: %.2f",m);

    // int i,n,sum=0,p,origN,r;
    // printf("Enter a number: ");
    // scanf("%d",&n);
    // origN=n;

    // while(n>0)
    // {
    //     r=n%10;
    //     p=r*r*r;
    //     sum=sum+p;
    //     n=n/10;
    // }

    // if(sum==origN)
    // {
    //     printf("The number is Armstrong number");
    // }
    // else
    // {
    //     printf("Not an Armstrong");
    // }

    // int n;

    // printf("Enter a number: ");
    // scanf("%d",&n);

    // if(n%2==0)
    // {
    //     printf("Even number:");
    // }
    // else{
    //     printf("Odd number");
    // }

    // int n;
    // printf("Enter a number: ");
    // scanf("%d",&n);

    // for(int i=1;i<=n;i++)
    // {
    //     if(n%i==0)
    //     {
    //         printf("%d\n",i);
    //     }
    // }

    // int n,sum=0;
    // int n1[10];
    // printf("Enter number: ");
    // scanf("%d",&n);
    // printf("Enter all the numbers: ");
    // for(int i=0;i<n;i++)
    // {
    //     scanf("%d",&n1[i]);
    // }
    // for(int i=0;i<n;i++)
    // {
    //     sum=sum+n1[i];
        
    // }
    // printf("Sum is %d",sum);

    // int n,count=0,i,j;

    // printf("Enter range: ");
    // scanf("%d",&n);
    // for(i=2;i<=n;i++)
    // {
    //     count=0;
    //     for(j=2;j<i;i++)
    //     {
    //         if(i%j==0)
    //         {
    //             count++;
    //             break;
    //         }
    //     }
    //     if(count==0)
    //     {
    //         printf("%d\n",i);
    //     }
    // }

    // int n,n1,l1;
    // int i=0;

    // printf("Enter number: ");
    // scanf("%d",&n);
    // printf("Enter all the numbers:\n");
    // printf("number 1: \n");
    // scanf("%d",&l1);

    // for(i=2;i<=n;i++)
    // {
    //     printf("number %d:\n",i);
    //     scanf("%d",&n1);

    //     if(l1<n1)
    //     {
    //         l1=n1;
    //     }
   
    // }
    //  printf("larger number is %d",l1);

    
    // int find_power(int n, int p)
    // {
    //     int r=1;
    //     for(int i=1;i<=p;i++)
    //     {
    //         r=r*n;
    //     }
    //     return r;
    // }
    //     int n,p,result;
    //     printf("Enter a number and its power: ");
    //     scanf("%d %d",&n,&p);
    //     result= find_power(n,p);
    //     printf("The rsult is %d: ",result);
    
    // char num[10];
    // int l1,i=0,count=0;

    // printf("Enter the string: ");
    // scanf("%s",num);

    // l1=strlen(num);

    // while(num[i]!='\0')
    // {
    //     if(num[i]=='.')
    //         {
    //             count=1;
    //             break;
    //         }
    //     i++;
    // }
    // if(count==1)
    // {
    //     printf("The number is floating number");
    // }
    // else{
    //     printf("Integer number");
    // }

    int n;
    printf("Enter a number table: ");
    scanf("%d",&n);

    for(int i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n", n,i,n*i);
    }
   

}