#include<stdio.h>
int main()
{
    char data[10];
    scanf("%[^\n]s", &data);
    printf("%c%c%c",data[3],data[4],data[5]);
    printf("%c%c%c",data[0],data[1],data[2]);
    printf("%c%c\n",data[6],data[7]);

     printf("%c%c%c",data[6],data[7],data[5]);
    printf("%c%c%c",data[3],data[4],data[2]);
    printf("%c%c\n",data[0],data[1]);

     printf("%c%c-",data[0],data[1]);
    printf("%c%c-",data[3],data[4]);
    printf("%c%c\n",data[6],data[7]);

    return 0;

    }
