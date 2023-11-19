#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num;
    cout<<"please input a number: ";
    cin>>num;

    for(int i=1;i<=10;i++)
    {
        cout<<num<<"*"<<i<<"="<<num*i<<endl;
    }
    getch();
}

