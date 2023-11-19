#include<stdio.h>
int main()
{
    double n;
    int A,B,C,D,E,F;
    int a,b,c,d,e,f;
    scanf("%d",&n);

    printf("NOTAS:\n");
    a=n/100;
    A=n%100;
    b=A/50;
    B=A%50;
    c=B/20;
    C=B%20;
    d=C/10;
    D=C%10;
    e=D/5;
    E=D%5;
    f=E/2;
    F=E%2;

    printf("%d nota(s) de R$ 100.00",a);
    printf("%d nota(s) de R$ 50.00",b);
    printf("%d nota(s) de R$ 20.00",c);
    printf("%d nota(s) de R$ 10.00",d);
    printf("%d nota(s) de R$ 5.00",e);
    printf("%d nota(s) de R$ 2.00",f);
    return 0;

}
