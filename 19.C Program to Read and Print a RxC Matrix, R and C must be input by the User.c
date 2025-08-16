/*C Program to Read and Print a RxC Matrix, R and C must be input by the User. 
Input :  
Enter the value of R: 2 
Enter the value of C : 2 
Enter the matrix elements: 
 1 2 
 3 4 
Output:  
You entered the following matrix:. 
 1 2 
 3 4 */
 #include <stdio.h>
 int main()
 {
     int n,m,i,j;
     
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
     printf("You entered the following matrix: \n");
     for(i=0;i<n;i++)
     {
         for(j=0;j<m;j++)
         {
             printf("%d ",ar[i][j]);
             
         }
         printf("\n");
         
     }
 }
