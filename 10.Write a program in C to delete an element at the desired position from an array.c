//Write a program in C to delete an element at the desired position from an array.

/*Enter array size:5
Enter the elements: 1 2 3 4 5

The elements of array: 1 2 3 4 5 
Enter the index to delete: 2
After deletinng: 1 2 4 5 */
#include<stdio.h>
int main()
{
    int n, i, sum=0;
    printf("Enter array size:");
    scanf("%d", &n);
    int arr[n+1];
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
    int index;
    printf("\nEnter the index to delete: ");
    scanf("%d",&index);
    
    for(i=index;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    printf("After deletinng: ");
    for(i=0;i<n-1;i++)
    {
        printf("%d ", arr[i]);
    }
    
}
