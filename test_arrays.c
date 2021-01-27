#include<stdio.h>

void main()
{
    // int arr[]={1,2,3,4,5};
    // int i=0,j,temp;

    // j=4;
    // //printf("%d",j);
    // //5 2 3 4 1 i= 0 j=4
    // //5 4 3 2 1 i=1 j=3
    // //i=2 j=2
    // // int mid = 5/2;
    // //for(int i=0; i < mid; ++i)
    // // swap(i, size-i-1);
    // while(i<j)
    // {
    //     temp=arr[j];
    //     arr[j]=arr[i];
    //     arr[i]=temp;
    //     i++;
    //     j--;
    // }
    // for(int i=0; i <5;++i)
    //      printf("%d", arr[i]);

    // int arr[20];
    // int i,pos,x,n;

    // printf("Enter number of elements: ");
    // scanf("%d",&n);

    // printf("Enter the elements: ");
    // for(i=0;i<n;i++)
    // {
    //     scanf("%d",&arr[i]);
    // }

    // printf("Enter position to insert an element: ");
    // scanf("%d", &pos);

    // printf("Enter element: ");
    // scanf("%d",&x);

    // for(i=n-1;i>=pos-1;i--)
    // {
    //     arr[i+1]=arr[i];
    // }
    // arr[pos-1]=x;

    // for(i=0;i<=n;i++)
    // {
    //     printf("%d\n",arr[i]);
    // }


    // int arr[20];
    // int i,pos,x,n;

    // printf("Enter number of elements: ");
    // scanf("%d",&n);

    // printf("Enter the elements: ");
    // for(i=0;i<n;i++)
    // {
    //     scanf("%d",&arr[i]);
    // }

    // printf("Enter position to delete an element: ");
    // scanf("%d", &pos);

    // // printf("Enter element: ");
    // // scanf("%d",&x);

    // for(i=pos-1;i<n-1;i++)
    //     {
    //         arr[i]=arr[i+1];
    //     }
    //     //arr[pos-1]=x;

    // for(i=0;i<n-1;i++)
    //     {
    //         printf("%d\n",arr[i]);
    //     }

    int arr[20];
    int n,i,l1,s1;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }

    l1=arr[0];
    for(i=0;i<n;i++)
    {
        if(l1<arr[i])
        {
            l1=arr[i];
        }
    }
    printf("largest is: %d ",l1);

    s1=arr[0];
    for(i=0;i<n;i++)
    {
        if(s1>arr[i])
        {
            s1=arr[i];
        }
    }
    printf("smallest is: %d ",s1);

}