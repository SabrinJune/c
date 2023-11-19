#include<stdio.h>
int main()
{
    char str[100], ch ;
    printf("please input a sentence\n");
    gets(str);
    printf("please input a character\n");
    scanf("%c",&ch);

    int i=0, freq=0;
    while(str[i]!='\0')
    {
        if(ch == str[i])
        {
          freq++;
        }
        i++;
    }
    printf("%d",freq);
    return 0;
}
