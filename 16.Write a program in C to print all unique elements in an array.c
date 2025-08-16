/*Write a program in C to print all unique elements in an array. 
Input :  
Enter the number of elements for your array: 5 
Enter the array elements: 
1 2 3 1 4 
Output:  
Unique elements : 2 3 4  */
#include<stdio.h>
int main() 
{
    int i,j,k,n,count=0;
    printf("Enter the number of elements for your array: ");
    scanf("%d",&n);
    printf("Enter the array elements: \n");
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("Unique elements : ");
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0,k=n;j<k+1;j++)
        {
            if(i!=j)
            {
                if(ar[i]==ar[j])
                {
                    count++;
                }
            }
        }
        if(count==0)
        {
            printf("%d ",ar[i]);
        }
    }
    printf("\n");
}
