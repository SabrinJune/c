#include <stdio.h>

int main()
{
    int i, j, rows;


    printf("Enter number of rows : ");
    scanf("%d", &rows);

    for(i=1; i<=(rows/2)+1; i++)
    {

        for(j=1; j<i; j++)
        {
            printf(" ");
        }


        for(j=1; j<=(rows -(2*i-1)+1); j++)
        {
            printf("@");
        }


        printf("\n");
    }

     for(i=2; i<=(rows/2)+1; i++)
    {

        for(j=i; j<rows-i; j++)
        {
            printf(" ");
        }


        for(j=2; j<=(2*i-1)+1; j++)
        {
            printf("@");
        }


        printf("\n");
    }

    return 0;
}
