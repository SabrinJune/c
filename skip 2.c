#include<stdio.h>
int main()
{
    int i;
    char name[10][30];
    for(i=1;i<=10;i++)
    {
        scanf("%s",&name[i]);
    }
    printf("%s\n",name[3]);
    printf("%s\n",name[7]);
    printf("%s\n",name[9]);
    return 0;
}
