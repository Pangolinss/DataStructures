#include<iostream>
#include<string>
using namespace std;

class Element
{
    private:
        Element* onTop;
        string value;
    public:
        Element()
        {
            value = "\0";
        }
        void setValue (string _val)
        {
            value = _val;
        }
        void elePush(string _val)
        {
            onTop = new Element;
            onTop->setValue(value);
            value = _val;
        }
        string elePeek()
        {
            return value;
        }
        void point(Element* _ele)
        {
            onTop = _ele;
        }

        Element* getTop()
        {
            return onTop;
        }
};

class Stack
{
    private:
        Element* top;
    public:
        Stack()
        {
            top = new Element;
        }
        void push(string _val)
        {
            Element* newTop;
            newTop = new Element;
            newTop->setValue(_val);
            newTop->point(top);
            top = newTop;

        }
        string peek()
        {
            return top->elePeek();
        }
        string pop()
        {
            string str = top->elePeek();
            top = top->getTop();
            return str;
        }

};


int main()
{
    string input;
    Stack stack_;
    for (int i = 0; i<5; i++)
    {
        cin>>input;
        stack_.push(input);
        cout<<stack_.peek()<<endl;
    }
    for (int i = 0; i<5; i++)
    {
        cout<<stack_.pop()<<endl;
    }
    return 0;
}
