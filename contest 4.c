#include<stdio.h>
int main()
{
    int A,B,C,D;
    scanf("%d %d %d %d",&A,&B,&C,&D);
    if(A==1)
    {
        printf("YES\n");
    }
    else if(A==0 &&B==1 && C==1 && D==1)
    {
        printf("YES\n");

    }
    else if (A==0 && B==1 && C==1 && D==0 )
    {
        printf("YES\n");
    }
    else if (A==0 && B==0 && C==1 && D==1 )
    {
        printf("YES\n");
    }
    else if (A==0 && B==1 && C==0 && D==1 )
    {
        printf("YES\n");
    }
    else
        {
            printf("NO\n");

    }
    return 0;

}
