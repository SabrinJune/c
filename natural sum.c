#include<stdio.h>
int main()
{
    int i,m,n,sum=0;
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}
