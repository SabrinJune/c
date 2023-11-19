#include<stdio.h>
int main()
{
    int i,n,N;
    char a,X;
    int sum,sum1=0,sum2=0,sum3=0;
    double p1,p2,p3;
    X='%';
    scanf("%d",&n);
    for(i=1;i<=n;i++){

        scanf("%d %c",&N,&a);
       if('C'==a){
        sum1=sum1+N;
       }
       if('R'==a){
        sum2=sum2+N;
       }
       if('S'==a){
        sum3=sum3+N;
       }
    }
    sum=sum1+sum2+sum3;

    p1=(sum1/(sum*1.00))*100.00;
    p2=(sum2/(sum*1.00))*100.00;
    p3=(sum3/(sum*1.00))*100.00;
    printf("Total: %d cobaias\n",sum);
    printf("Total de coelhos: %d\n",sum1);
    printf("Total de ratos: %d\n",sum2);
    printf("Total de sapos: %d\n",sum3);
    printf("Percentual de coelhos: %.2lf %c\n",p1,X);
    printf("Percentual de ratos: %.2lf %c\n",p2,X);
    printf("Percentual de sapos: %.2lf %c\n",p3,X);
}
