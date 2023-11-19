#include<stdio.h>
int main()
{
    char str[100];
    gets(str);
    int i=0;
   while(str[i]!='\0')
    {
      printf("%c ",str[i]);
      i++;
    }
    printf("\n");
    return 0;
}
