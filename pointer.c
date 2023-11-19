#include<stdio.h>
void swap(int *ptr1, int *ptr2)
{
  int tem;
  tem=*ptr1;
  *ptr1=*ptr2;
  *ptr2=tem;
  printf("after swapping x=%d and y=%d\n",*ptr1,*ptr2);
}
int main()
{
    int x=10, y=5;

    printf("before swapping x=%d and y=%d\n",x,y);

    swap(&x,&y);
}
