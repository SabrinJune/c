#include<stdio.h>
int main()
{
    int n,i,rem;
    scanf("%d",&n);
    if(n<2)
    {
        printf("not prime number");
    }
    else if(n==2)
    {
        printf("prime number");
    }
    else
    {
        for(i=2;i<n;i++)
        {
          rem=n%i;
           if(rem==0)
            break;
        }
       if(rem==0)
        {
            printf("not prime number");
        }
        else
        {
            printf("prime number");
        }
    }
    return 0;


}
