#include<stdio.h>
int main()
{
    int a=1,b=1,c=1,d=1,e=1,f=1,x,y,z;
    x=a+b;
    y=c+d;
    z=e+f;

    printf("%d+%d=%d\n %d+%d=%d\n %d+%d=%d\n %d+%d+%d=%d",a,b,x,c,d,y,e,f,z,x,y,z,x+y+z);

    return 0;
}
