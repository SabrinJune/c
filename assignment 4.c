
#include <stdio.h>

int main()
{
    int i, j, row;

    printf("Enter value of row : ");
    scanf("%d", &row);


    for(i=1; i<=row; i++)
    {
        for(j=i; j<=row-1; j++)
        {
            printf("#");
        }

        for(j=1; j<=(2*i); j++)
        {
            printf(" ");
        }

        for(j=i; j<=row-1; j++)
        {
            printf("#");
        }

        printf("\n");
    }


    for(i=1; i<=row; i++)
    {
        for(j=1; j<=i-1; j++)
        {
            printf("#");
        }

        for(j=(2*i-2); j<(2*row); j++)
        {
            printf(" ");
        }

        for(j=1; j<=i-1; j++)
        {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}
