#include<stdio.h>
int main()
{
    int n,f0 = 0, f1 = 1, fibo,i;

    scanf("%d",&n);

    printf("%d \n%d\n", f0,f1);

    for(i=3;i<=n;i++)
    {
        fibo = f0+f1;
        f0 = f1;
        f1 = fibo;
        printf("%d\n",fibo);
    }
    return 0;
}
