//Write a program in C to insert a new value at the end of an array.
#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter array size:");
    scanf("%d", &n);
    int arr[n+1]; //need to watch here
    printf("Enter the elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe elements of array: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nEnter the new elements: ");
    scanf("%d",&arr[n]);
    
    printf("after adding the elements: ");
    for(i=0;i<=n;i++)  //need to watch here carefully
    {
        printf("%d ",arr[i]);
    }
    
}
