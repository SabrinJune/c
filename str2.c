#include<stdio.h>
int main()
{
    char str[100];
    gets(str);
    int i=0,word = 0, ch;
    while((ch=str[i])!='\0')
    {
        if(ch==' ')
            word++;
            i++;
    }
    word++;
    printf("%d",word);
    return 0;
}
