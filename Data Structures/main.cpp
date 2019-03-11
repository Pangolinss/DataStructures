#include<iostream>
#include"LinkList.h"
using namespace std;

int main()
{
    string input;
    LinkList llist;
    LinkList newlist;
    for (int i = 0; i<5; i++)
    {
        cin>>input;
        llist.append(input);
    }

    for (int i = 0; i<5; i++)
    {
        cout<<llist[i]->getValue()<<endl;
    }
    newlist = llist;
    for (int i = 0; i<5; i++)
    {
        cout<<newlist[i]->getValue()<<endl;
    }


    return 0;
}
