#include<stdio.h>
int main()
{
     int row,col,i,j;
    int A[10][10], C[10][10];
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
     printf("A matrix=\n");
    for(i=0;i<row;i++)
    {
      for(j=0;j<col;j++)
        {printf("%d ",A[i][j]);
    }
    printf("\n");}

    for(i=0;i<row;i++)
    {
      for(j=0;j<col;j++)
        {
            C[j][i]= A[i][j];

    }
    printf("\n");}
     printf("transpose matrix=\n");
    for(i=0;i<col;i++)
    {
      for(j=0;j<row;j++)
        {
            printf("%d ",C[i][j]);

    }
    printf("\n");}
}
