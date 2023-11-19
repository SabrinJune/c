#include <stdio.h>

int main(){


    int x, y, min, max, sum,i;


    while(1){

                scanf("%d%d",&x,&y);
                if(x <= 0 ) break;
                if(y <= 0) break;

                if(x > y)
                     {max = x;
                     min = y;}
                else
                {
                    min=x;
                    max=y;
                }

                sum = 0;

                for( i = min; i <= max; i++){
                       printf("%d ",i);
                       sum += i;
                }
                printf("Sum=%d\n",sum);

    }
    return 0;
}
