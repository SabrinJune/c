#include<stdio.h>
int main()
{
    int num,n,rem,i;
    scanf("%d%d",&num,&n);
    for(i=1;i<=n;i++)
    {
        rem=num%10;

        if(rem==0)
        {
            num=num/10;
        }
        else
        {
            num=num-1;
        }
    }
    printf("%d",num);
    return 0;
}
