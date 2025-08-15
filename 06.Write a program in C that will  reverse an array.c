/*Write a program in C that will  reverse an array.. 
Input :  
Enter the number of elements for your array: 5 
Enter the array elements: 
100 2 300 1 2 
Output:  
Your array after reversing: 
2 1 300 2 100 */
#include <stdio.h>
int main() 
{
    int n,i;
    printf("Enter the number of elements for your array: ");
    scanf("%d",&n);
    int ar[100];
    printf("Enter the array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    
    printf("Your array after reversing: \n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",ar[i]);
    }
}

/* Swap Method: (Mustafina ma'am)
#include <stdio.h>
int main() 
{
    int n,i;
    printf("Enter the number of elements for your array: ");
    scanf("%d",&n);
    int ar[100];
    printf("Enter the array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n/2;i++){
        int temp=ar[i];
        ar[i]=ar[n-1-i];
        ar[n-1-i]=temp;
    }
    printf("Your array after reversing: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
    
}*/




