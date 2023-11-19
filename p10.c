#include<stdio.h>
int main()
{
    int a,b,c,d,largest,smallest,sum;

    printf("please input 4 numbers\n");

    scanf("%d%d%d%d",&a,&b,&c,&d);

    if(a>b && a>c && a>d )
    {   largest=a;
        printf("%d\n",largest);
    }
    else if(b>c && b>d)
    {
        largest=b;
        printf("%d\n" ,largest);
    }
    else if(c>d)
    {
        largest=c;
        printf("%d\n",largest);
    }
    else
    {
        largest=d;
        printf("%d\n",largest);
    }


 if(a<b && a<c && a<d )
    {

        smallest=a;
        printf("%d\n",smallest);
    }
    else if(b<c && b<d)
    {
        smallest=b;
        printf("%d\n",smallest);
    }
    else if(c<d)
    {
        smallest=c;
        printf("%d\n",smallest);
    }
    else
    {
        smallest=d;
        printf("%d\n",smallest);
    }

    sum=largest+smallest;

    if(sum>5 && sum<9)
    {
        printf("Ground");
    }
    else if(sum>=9)
    {
        printf("Roof");
    }
    else
    {
        printf("too small");
    }

    return 0;
}

