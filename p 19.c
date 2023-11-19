
#include<stdio.h>
#define pi 3.1416
int main()
{ float a=3,b=12,c=8,c1,c2,c3;
c1=pi*a*a;
c2=pi*b*b;
c3=pi*c*c;
if (c1>250)
{
    printf("Lucy is the winner");
}
else if (c2>250)
{
    printf("Pepa is the winner");
}
else if (c3>250)
{
    printf("Icy is the winner");
}
  getch();
  return 0;

}


