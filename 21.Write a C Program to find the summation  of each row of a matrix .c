/*Write a C Program to find the summation  of each row of a matrix 
Input :  
Inputs for matrix 1: 
Enter the value of R: 2 
Enter the value of C : 2 
Enter the matrix elements: 
 1 2 
 3 4 
Output:  
The summation of row 1: 3 
The summation of row 2: 7 */
 #include <stdio.h>
 int main()
 {
     int n,m,i,j;
     printf("Inputs for matrix 1: \n");
     printf("Enter the value of R: ");
     scanf("%d",&n);
     printf("Enter the value of C : ");
     scanf("%d",&m);
     int ar[n][m];
     printf("Enter the matrix elements: \n");
     for(i=0;i<n;i++)
     {
         for(j=0;j<m;j++)
         {
             scanf("%d",&ar[i][j]);
         }
     }
     int rsum1[n];
     for(i=0;i<n;i++)
     {
         rsum1[i]=0;
         for(j=0;j<m;j++)
         {
             rsum1[i]=rsum1[i] + ar[i][j];
         }
     }
    for (i = 0; i < n; i++) 
    {
        printf("The summation of row %d: %d\n",i+1,rsum1[i]);
    }
     
 }
