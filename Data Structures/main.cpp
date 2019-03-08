#include<iostream>
#include"LinkList.h"
using namespace std;

int main()
{
    string input;
    LinkList llist;
    for (int i = 0; i<5; i++)
    {
        cin>>input;
        llist.add(input);
    }
    for (int n = 0; n<5; n++)
    {

        cout<<"The last is "<<llist.getLast()->getValue()<<endl;
        cout<<"The current value is "<<llist.lfind(n)->getValue()<<endl;
        cout<<"Removing "<<llist.lremove(llist.lfind(n))<<endl;
        cout<<"====================="<<endl;

        //cout<<llist.lfind(n)->getValue()<<endl;
    }
    return 0;
}
