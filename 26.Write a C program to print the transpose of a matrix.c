/*Write a C program to print the transpose of a matrix:
Input :
Inputs for matrix :
Enter the value of R: 3
Enter the value of C : 3
Enter the matrix elements:
1 2 3
4 5 6
7 8 9
Output:
transpose of the matrix
1 4 7
2 5 8
3 6 9*/
#include <stdio.h>
 int main()
 {
     int r1,c1,i,j;
     printf("Inputs for matrix 1: \n");
     printf("Enter the value of R: ");
     scanf("%d",&r1);
     printf("Enter the value of C : ");
     scanf("%d",&c1);
     int ar[r1][c1],br[r1][c1];
     printf("Enter the matrix elements: \n");
     for(i=0;i<r1;i++)
     {
         for(j=0;j<c1;j++)
         {
             scanf("%d",&ar[i][j]);
         }
     }
     
     for(i=0;i<r1;i++)
     {
         for(j=0;j<c1;j++)
         {
             br[j][i]=ar[i][j];
         }
     }
     printf("transpose of the matrix\n");
     for(i=0;i<r1;i++)
     {
         for(j=0;j<c1;j++)
         {
             printf("%d ",br[i][j]);
         }
         printf("\n");
     }
     
