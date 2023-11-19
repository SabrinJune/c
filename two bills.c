
#include <stdio.h>

int main()
{
    int a, b, rem, i, condition;
    int bill[15] = {7, 12, 22, 52, 102, 15, 25, 55, 105, 30, 60, 110, 70, 120, 150};
  while(1)
    {
        scanf("%d%d", &a, &b);
        if(a==0 && b==0)
            break;
        rem = b - a;
        for(i=0;condition=0, i<15; i++)
        {
            if(bill[i] == rem)
            {
                condition = 1;
                break;
            }
        }
        if(condition)
         printf("possible\n");
        else
            printf("impossible\n");
    }
    return 0;
}

