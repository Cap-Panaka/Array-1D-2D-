/*Write a program in C to count the total number of duplicate elements in an array. 
Input :  
Enter the number of elements for your array: 5 
Enter the array elements: 
1 2 3 1 2 
Output:  
total number of duplicate elements : 2 */
#include <stdio.h>
int main() 
{
    int n,i,j,count=0;
    printf("Enter the number of elements for your array: ");
    scanf("%d",&n);
    printf("Enter the array elements: \n");
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if (ar[i]==ar[j])
            {
                count++;
                break;
            }
        }
    }
    printf("Total number of duplicate elements : %d\n",count);
}
