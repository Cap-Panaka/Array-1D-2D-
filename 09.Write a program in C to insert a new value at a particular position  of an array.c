//Write a program in C to insert a new value at a particular position  of an array. 

/*Enter array size:5
Enter the elements: 1 2 3 4 5

The elements of array: 1 2 3 4 5 
ENter the index: 3

Enter the new elements: 2
after adding the elements: 1 2 3 2 4 5 */
#include<stdio.h>
int main()
{
    int n, i;
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
    int index,value;
    printf("\nENter the index: ");
    scanf("%d",&index);
    
    printf("\nEnter the new elements: ");
    scanf("%d",&value);
    
    for(i=n;i>index;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[index]=value;
    
    printf("after adding the elements: ");
    for(i=0;i<=n;i++) //Watch here
    {
        printf("%d ",arr[i]);
    }
}
