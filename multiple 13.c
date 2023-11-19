#include<stdio.h>
int main()
{
    int x ,y ,sum = 0, i, min, max;

    scanf("%d %d", &x, &y);

    if(x > y)
    {
        max=x;
        min=y;
    }
    else
    {
        min=x;
        max=y;
    }

    for(i = min;i <= max;i++)
    {
        if(i%13 != 0)
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
