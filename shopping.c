#include<stdio.h>
int main()
{
    int product,code,quantity;
    double amount=0.00;

    scanf("%d",&product);

    while(product--)
    {


        scanf("%d%d",&code,&quantity);

        if(quantity>=1&&quantity<=500)


        {switch(code)
        {
            case 1001: amount+=quantity*1.50;
            break;
            case 1002: amount+=quantity*2.50;
            break;
            case 1003: amount+=quantity*3.50;
            break;
            case 1004: amount+=quantity*4.50;
            break;
            case 1005: amount+=quantity*5.50;
            break;

        }
        }
    }
        printf("%.2lf",amount);
        return 0;
        }






