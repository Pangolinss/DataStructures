#include "Stack.h"

Stack::Stack()
{
    top = nullptr;
}

void Stack::push(std::string _val)
{
    Element* newTop;
    newTop = new Element (_val, top);
    top = newTop;
}

std::string Stack::peek()
{
    return top->getValue();
}
std::string Stack::pop()
{
    if (top != nullptr)
    {
        std::string str = top->getValue();
        top = top->getNext();
        return str;
    }
    else
    {
        return "\0";
    }
}
