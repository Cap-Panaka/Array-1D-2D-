#include <stdio.h>
int main() 
{
    int n,i;
    printf("Enter the number of elements for your array: ");
    scanf("%d",&n);
    int ar[n];
    int ar1[n];
    
    printf("Enter the array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("The elements of array: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
    //copy
    for(i=0;i<n;i++)
    {
        ar1[i]=ar[i];
        
    }
    
    //reverse
    for(i=0;i<n/2;i++){
        int temp=ar[i];
        ar[i]=ar[n-1-i];
        ar[n-1-i]=temp;
    }
    printf("\nYour array after reversing: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
    
    //Pallindrome
    int flag=1;
    for(i=0;i<n;i++)
    {
        if(ar[i]!=ar1[i])
        {
            printf("\nNot Pallindrome");
            flag=0;
            break;
        }
       
    }
    if(flag==1)
    printf("\nPallindrome");
} 
