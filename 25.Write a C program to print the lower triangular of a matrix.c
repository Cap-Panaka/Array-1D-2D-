/*Write a C program to print the lower triangular of a matrix:
Input :
Inputs for matrix :
Enter the value of R: 3
Enter the value of C : 3
Enter the matrix elements:
1 2 3
4 5 6
7 8 9
Output:
lower triangular of a matrix
1
4 5
7 8 9*/
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
     printf("lower triangular of a matrix\n");
     for(i=0;i<r1;i++)
     {
         for(j=0;j<=i ;j++)    //&&j<c1
         {
             printf("%d ",ar[i][j]);
         }
         printf("\n");
     }
}
