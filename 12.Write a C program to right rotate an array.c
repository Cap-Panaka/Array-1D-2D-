/*Write a C program to right rotate an array. 

Enter array size: 5
Enter the elements: 1 2 3 4 5

The elements of array: 1 2 3 4 5 
After right rotation: 5 1 2 3 4 
*/

#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nThe elements of array: ");
    for(i = 0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    int temp = arr[n-1];
    for(i = n-1;i>0;i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
    printf("\nAfter right rotation: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
