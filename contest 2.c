#include<stdio.h>
int main()
{
    int X,Y,M,Z,cost;
    scanf("%d %d %d %d",&X,&Z,&Y,&M);

    if(Y>=X)
    {
        cost=X*(Z-M);
    }
    else
    {
        cost=(((X-Y)*Z)+Y*(Z-M));
    }
    printf("%d",cost);
    return 0;
}
