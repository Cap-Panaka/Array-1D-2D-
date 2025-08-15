//Write a program in C to find a value in the array.
#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter array size:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe elements of array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    int value,found=0;
    printf("\nEnter the value that you want to find: ");
    scanf("%d",&value);
    
    for(i=0;i<n;i++)
    {
        if(value==arr[i])
        {
            printf("Value found.");
            found=1;
            break;
        }
    }
    if(found==0)
    printf("Not found");
}
