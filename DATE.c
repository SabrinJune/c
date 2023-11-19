#include<stdio.h>
int main()
{
    int DD,MM,YY;
    scanf("%d/%d/%d",&DD,&MM,&YY);
    printf("%d/%d/%d\n",MM,DD,YY);
    printf("%d/%d/%d\n",YY,MM,DD);
    printf("%d-%d-%d\n",DD,MM,YY);
    return 0;
}

