/*Write a C program to print the right diagonal elements of a matrix.
Input :
Inputs for matrix 1:
Enter the value of R: 2
Enter the value of C : 2
Enter the matrix elements:
1 2
3 4
Output:
The elements of the diagonal are:
1 4 */
#include <stdio.h>
 int main()
 {
     int r1,c1,i,j;
     printf("Inputs for matrix 1: \n");
     printf("Enter the value of R: ");
     scanf("%d",&r1);
     printf("Enter the value of C : ");
     scanf("%d",&c1);
     int ar[r1][c1];
     printf("Enter the matrix elements: \n");
     for(i=0;i<r1;i++)
     {
         for(j=0;j<c1;j++)
         {
             scanf("%d",&ar[i][j]);
         }
     }
     printf("The elements of the diagonal are: \n");
     for(i=0;i<r1 && i<c1;i++)
     {
         printf("%d ",ar[i][i]);
     }
     printf("\n");
}
