//Write a program to sort array in ascending order 
/*Enter the number of elements for your array: 5
Enter the array elements: 
1 2 3 2 1
Elements of array in sorted ascending order:
1 1 2 2 3*/
 #include <stdio.h>
int main()
{
    int n,i,j,temp;
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
            if(ar[j]<ar[i])  //if(ar[i]<ar[j]) //descending
            {
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }
    printf("Elements of array in sorted ascending order:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
    printf("\n");
} 
