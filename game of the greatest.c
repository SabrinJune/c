#include<stdio.h>
int main()
{


        int n,a,b,i,j;

        scanf("%d",&n);
        for(j=n;j>=1;j--)
        { int x1=0, x2=0;
          if(n==0)
            break;

        for(i=1;i<=j;i++)
        {
            scanf("%d%d",&a,&b);

            if(a>b)
            {
              x1++ ;
            }
            else if (b>a)
            {
                x2++;
            }
            }
         printf("%d %d\n",x1,x2);

        }
         return 0;

}
