/*Write a program in C to count the frequency of each element of an array. 
Input :  
Enter the number of elements for your array: 5 
Enter the array elements: 
99 2 99 1 2 
Output:  
The frequency of 99 is 2. 
The frequency of 2 is 2. 
The frequency of 1 is 1  */
#include <stdio.h>
int main() 
{
   int i,j,n;
   printf("Enter the number of elements for your array: ");
   scanf("%d",&n);
   printf("Enter the array elements: \n");
   int ar[n];
   for(i=0;i<n;i++)
   {
       scanf("%d",&ar[i]);
   }
   int freq[n];
   for(i=0;i<n;i++)
   {
       freq[i]=-1;
   }
   int count ;
   for(i=0;i<n;i++)
   {
       count=1;
       if(freq[i]!=0){
       for(j=i+1;j<n;j++)
       {
           if(ar[i]==ar[j])
           {
               count++;
               freq[j]=0;
           }
       }
        freq[i]=count;
       }
   }
      
       for(i=0;i<n;i++)
       {
           if(freq[i]!=0)
           {
               printf("The frequency of %d is %d.\n",ar[i],freq[i]);
           }
       }
   }
