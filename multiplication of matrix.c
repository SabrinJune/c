#include<stdio.h>
int main()
{
    int i,j,k,c1,c2,r1,r2,sum=0;
    int A[10][10], B[10][10], C[10][10];
    printf("enter the row and column of A matrix\n ");
    scanf("%d%d",&r1,&c1);
    printf("enter the row and column of B matrix\n ");
    scanf("%d%d",&r2,&c2);
    while(c1!=r2)
    {
        printf("error!! please meet  the condition\n");
        printf("enter the row and column of A matrix\n ");
        scanf("%d%d",&r1,&c1);
        printf("enter the row and column of B matrix\n ");
        scanf("%d%d",&r2,&c2);

    }
    printf("enter the elements of A matrix\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("enter elements of B matrix \n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");

    }
    printf("A matrix=\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("B matrix=\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum=sum+A[i][k]*B[k][j];
            }
            C[i][j]=sum;
            sum=0;
        }
    }
    printf("multiplied matrix=\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }


}
