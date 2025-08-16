/*Write a C Program to find sum and subtraction of two matrices 
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
The sum of the two matrices: 
2 3 
4 5 
The diff between the two matrices: 
0 1 
2 3 */
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
     
     printf("Inputs for matrix 2: \n");
     printf("Enter the value of R: ");
     scanf("%d",&n);
     printf("Enter the value of C : ");
     scanf("%d",&m);
     int ar1[n][m];
     printf("Enter the matrix elements: \n");
     for(i=0;i<n;i++)
     {
         for(j=0;j<m;j++)
         {
             scanf("%d",&ar1[i][j]);
         }
     }
     int ar2[n][m];
     for (i = 0; i < n; i++)
     {
        for (j = 0; j < m; j++)
        {
            ar2[i][j] = ar[i][j] + ar1[i][j];
        }

     }
     printf("The sum of the two matrices: \n");
         for(i=0;i<n;i++)
         {
             printf("\n");
             for(j=0;j<m;j++)
             {
                 printf("%d ",ar2[i][j]);
             }
         }
         printf("\n");
    int ar3[n][m];
     for (i = 0; i < n; i++)
     {
        for (j = 0; j < m; j++)
        {
            ar3[i][j] = ar[i][j] - ar1[i][j];
        }

     }
     printf("The diff between the two matrices: \n");
         for(i=0;i<n;i++)
         {
             printf("\n");
             for(j=0;j<m;j++)
             {
                 printf("%d ",ar3[i][j]);
             }
         }
 }
