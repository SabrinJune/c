#include<stdio.h>
int main()
{
  int num,count=0;

  scanf("%d",&num) ;
  do
  {
      count++;
      num=num/10;

  }
  while(num!=0);
  printf("%d",count);
  return 0;
}
