#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);

    if (n == 4)
        printf("Invalid\n");
    else
    {
        if (n % 3 == 0)
            printf("Equilateral\n");
        else
            printf("Isosceles\n");
    }
    return 0;
}
