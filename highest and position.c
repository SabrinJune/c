#include<stdio.h>

int main()
{
    int i,max = 0,pos,arr[100];
    for (i = 0;i < 100;i++){
        scanf("%d", &arr[i]);
    }
    for(i = 0;i < 100;i++){
            if(arr[i] > max){
                max = arr[i];
                pos = i+1;
            }
    }
    printf("%d\n", max);
    printf("%d\n", pos);

    return 0;
}
