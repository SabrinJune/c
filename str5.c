#include<stdio.h>
int main()
{
    char s1[100];
    char s2[100];
    char tem[100];
    gets(s1);
    gets(s2);
    strcpy(tem,s1);
    strcpy(s1,s2);
    strcpy(s2,tem);
    printf("%s\n%s",s1,s2);
    return 0;
}
