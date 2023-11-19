#include <stdio.h>

int main()
{
    int i, j, N;
    int count;

    printf("Enter N: ");
    scanf("%d", &N);



    for(i=1; i<=N; i++)
    {
        for(j=1; j<=N; j++)
        {
            if(j==i || (j==N - i + 1))
            {

                if(j==(N/2)+1&&i==(N/2)+1)
                   {
                      printf("?");
                   }
                   else
               {printf("@");
            }}

            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
