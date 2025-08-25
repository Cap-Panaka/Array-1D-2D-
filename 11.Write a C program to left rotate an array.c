/*Write a C program to left rotate an array. 

Enter array size: 5
Enter the elements: 1 2 3 4 5

The elements of array: 1 2 3 4 5 
After left rotation: 2 3 4 5 1 
*/

#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe elements of array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    int temp = arr[0];
    for(i=0;i<n-1;i++)
    {
        arr[i]=arr[i + 1];
    }
    arr[n-1]=temp;
    printf("\nAfter left rotation: ");
    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
}








/*#include<stdio.h>
int main() {
    int n, i, rotations;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n], temp[n];
    printf("Enter the elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nThe elements of array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nEnter number of rotations: ");
    scanf("%d", &rotations);
    rotations = rotations % n;
    for(i = 0; i < n; i++) {
        temp[(i - rotations + n) % n] = arr[i];
    }
    for(i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    printf("\nAfter %d left rotation(s): ", rotations);
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}*/
