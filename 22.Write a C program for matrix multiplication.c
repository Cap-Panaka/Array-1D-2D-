/*Write a C program for matrix multiplication. 
Input :  
Inputs for matrix 1: 
Enter the value of R: 2 
Enter the value of C : 2 
Enter the matrix elements: 
 1 2 
 3 4 
Inputs for matrix 2: 
Enter the value of R: 2 
Enter the value of C : 2 
Enter the matrix elements: 
 1 1 
 1 1 
Output:  
Matrix multiplication result: 
3 3  
7 7 */
 #include <stdio.h>
 int main()
 {
     int r1,r2,c1,c2,i,j,k,sum=0;
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
     printf("Inputs for matrix 2: \n");
     printf("Enter the value of R: ");
     scanf("%d",&r2);
     printf("Enter the value of C : ");
     scanf("%d",&c2);
     int ar1[r2][c2];
     printf("Enter the matrix elements: \n");
     for(i=0;i<r2;i++)
     {
         for(j=0;j<c2;j++)
         {
             scanf("%d",&ar1[i][j]);
         }
     }
     if (c1 != r2) {
        printf("Multiplication of matrices is not possible.\n");
        printf("Column of the first matrix and row of the second matrix must be the same.\n");
        return 0;}
        int ar2[i][j];
    for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                sum = 0;
                for (k = 0; k < c1; k++)
                    sum = sum + ar[i][k] * ar1[k][j];
                ar2[i][j] = sum;
            }
        }
     printf("\nMatrix multiplication result: \n");
        for (i = 0; i < r1; i++) {
            printf("\n");
            for (j = 0; j < c2; j++)
                printf("%d ", ar2[i][j]);
        }
 }
