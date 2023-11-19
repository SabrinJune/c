#include<stdio.h>
int main()
{
    int row,col,i,j;
    int A[10][10], B[10][10], C[10][10];
    printf("enter the number of rows and column\n");
    scanf("%d%d",&row, & col);
    printf("enter elements of A matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("enter elements of B matrix \n");
     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("B[%d][%d]",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");

    }
    printf("A matrix=\n");
    for(i=0;i<row;i++)
    {
      for(j=0;j<col;j++)
        {printf("%d ",A[i][j]);
    }
    printf("\n");}
     printf("B matrix=\n");
    for(i=0;i<row;i++)
    {
      for(j=0;j<col;j++)
       {
        printf("%d ",B[i][j]);
       }
      printf("\n");}
      printf("the sum of the matrix=\n");
       for(i=0;i<row;i++)
    {
      for(j=0;j<col;j++)
       {
         C[i][j]= A[i][j]+ B[i][j];
         printf("%d ",C[i][j]);
       }
      printf("\n");}


}
