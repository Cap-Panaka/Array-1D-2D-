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
    printf("You entered the following array elements: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

}
