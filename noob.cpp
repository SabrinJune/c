#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{   float num1,num2,sum,sub,multi,div;

    char name[50];
    cout<<"enter two numbers:"<<endl;

    cin>>num1>>num2;

    sum=num1+num2;

    cout<<showpoint;

    cout<<"the sum is= " <<sum<<endl;

     sub=num1-num2;

     cout<<noshowpoint;

    cout<<"the subtraction is= " <<sub<<endl;

     multi=num1*num2;

     cout<<showpoint;

     cout<<setprecision(10);

    cout<<"the multiplication is= " <<multi<<endl;

     div=num1/num2;

     cout<<fixed;
     cout<<setprecision(8);

    cout<<"the division is= " <<div<<endl;

    cout<<"please enter your name:"<<endl;

    cin>>name;

    cout<<"my name is " <<name<<endl;

    cout<<"sabrin" <<" loves"<<" you";
    getch();

}
