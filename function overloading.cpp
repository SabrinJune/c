#include<iostream>
#include<conio.h>
using namespace std;
int sum(int x, int y)
{
    int sum = x+y;
    return sum;
}
int sum(int x, int y, int z)
{
    int sum = x+y+z;
    return sum;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int r1= sum(a,b);
    int r2= sum(a,b,c);
    cout<<r1<<endl<<r2<<endl;
    getch();
}
