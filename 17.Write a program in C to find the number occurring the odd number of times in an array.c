//Write a program in C to find the number occurring the odd number of times in an array.
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
   
   printf("The number occurring the odd number of times \n") ;  
       for(i=0;i<n;i++)
       {
           if(freq[i]!=0 && freq[i]%2!=0)
           {
               printf("The frequency of %d is %d.\n",ar[i],freq[i]);
           }
       }
   }
