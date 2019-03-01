#include<iostream>
#include"Stack.h"
using namespace std;

int main()
{
    string input;
    Stack stack_;
    cout<<stack_.pop()<<endl;
    for (int i = 0; i<5; i++)
    {
        cin>>input;
        stack_.push(input);
        cout<<stack_.peek()<<endl;
    }
    for (int i = 0; i<6; i++)
    {
        cout<<stack_.pop()<<endl;
    }
    return 0;
}
