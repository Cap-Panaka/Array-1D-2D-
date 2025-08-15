/*Write a program in C to copy the elements of one array into another array.
Input :
Enter the number of elements for your array: 5
Enter the array elements:
100 2 300 1 2
Output:
The elements in array are as follows:
100 2 300 1 2*/

#include<stdio.h>
int main()
{

    int n,i;
    printf("Enter the number of elements for your array: ");
    scanf("%d",&n);
    int arr[n];
    int arr1[n];
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
    for(i=0;i<n;i++)
    {
        arr1[i]=arr[i];
    }
    printf("\nThe elements in array are as follows: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr1[i]);
    }
}
