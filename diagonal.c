#include<stdio.h>
int main()
{
     int row,col,i,j,sum=0;
    int A[10][10];
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
            if(i==j)
            {
                sum=sum+A[i][j];
            }
    }

    printf("\n");}
    printf("the sum is %d",sum);
}
