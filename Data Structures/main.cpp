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
    for (int i = 0; i<5; i++)
    {
        llist.lfind(i);
    }
    return 0;
}
