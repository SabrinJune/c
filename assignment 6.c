#include<stdio.h>

int main()
{
    int i, j, n;


    printf("Enter value of n: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {

        for(j=1; j<=i; j++)
        {   if(i%2==0)
            {printf("&");}
            else
            {printf("#");
        }}

         for(j=1; j<=(n*2 -(2*i-1)-1); j++)
        {
            printf(" ");
        }




        for(j=1; j<=i; j++)
        {
            if(i%2==0)
            {printf("#");}
            else
            {printf("&");}

        }


        printf("\n");
    }

    return 0;
}
