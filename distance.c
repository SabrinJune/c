#include<stdio.h>
#include<math.h>
int main()
{
    double x1,x2,y1,y2,distance;
    scanf("%.1lf%.1lf\n%.1lf%.1lf\n",&x1,&y1,&x2,&y2);
    distance= sqrt(pow(2,x2-x1)+pow(2,y2-y1));
    printf("%.4lf\n",distance);
    return 0;
}
