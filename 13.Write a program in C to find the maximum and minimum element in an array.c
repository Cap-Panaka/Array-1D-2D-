/*Write a program in C to find the maximum and minimum element in an array. 
Input :  
Enter the number of elements for your array: 5 
Enter the array elements: 
100 2 300 1 2 
Output:  
The maximum element is 300. 
The minimum element is 1. */
#include <stdio.h>
int main() 
{
   int i,n;
   printf("Enter the number of elements for your array: ");
   scanf("%d",&n);
   printf("Enter the array elements: \n");
   int ar[n];
   for(i=0;i<n;i++)
   {
       scanf("%d",&ar[i]);
   }
   int max=ar[0];
   int min=ar[0];
   for(i=0;i<n;i++)
   {
    if(ar[i]>max)
    {
        max=ar[i];
    }
    if(ar[i]<min)
    {
        min=ar[i];
    }
   }
   printf("The maximum element is %d.\n",max);
   printf("The minimum element is %d.\n",min);
}
