#include<stdio.h>
int main()
{
    int arr[1000]={0}, n,m,i,count;
    scanf("%d %d",&n,&m);
    for(i=1;i<=m;i++)
    {
        scanf("%d",&i);
        arr[i]++;
        if(arr[i]>=2)
            count++;
    }
    printf("%d",count);
    return 0;

}
