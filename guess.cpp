#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;

int main()
{   while(1)
    {
        int guess, random;
    cout<<"enter a number from 1 to 5: ";
    cin>>guess;
    random = (rand()%5)+1;

    if(guess==random)
    {
        cout<<"congratulations!!"<<endl<<"you have won"<<endl;
    }
    else
        {
            cout<<"sorry!!"<<endl<<"you have lost"<<endl<<"try again"<<endl<<"the number is = "<<random<<endl;
        }
    }
}
