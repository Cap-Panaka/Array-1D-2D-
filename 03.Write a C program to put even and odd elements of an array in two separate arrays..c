//3.Write a C program to put even and odd elements of an array in two separate arrays.

#include<stdio.h>
int main()
{

    int n,i;
    printf("Enter the number of elements for your array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("You entered the following array elements: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    int count =0;
    printf("\nOdd elements: \n");
     for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
        count++;
        printf("%d ",arr[i]);
        }
    }
    printf("\nNumber of odd elements: %d\n",count);
    
    count=0;  printf("\nEven elements: \n");
     for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
        count++;
        printf("%d ",arr[i]);
        }
    }
    printf("\nNumber of even elements: %d\n",count);
}

