#include<stdio.h>
int main()
{
    char str[100];
    gets(str);
    int i=0, ch;
    while(str[i]!='\0')
    {
        if(str[i]>='a'&& str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
        else if(str[i]>='A'&& str[i]<='Z')
        {
           str[i] = str[i] + 32;
        }
        i++;
    }
    printf("%s",str);
    return 0;
}
