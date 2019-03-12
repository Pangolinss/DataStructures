#include "Stack.h"

template<typename T>
Stack<T>::Stack()
{
    top = nullptr;
}

template<typename T>
void Stack<T>::push(std::string _val)
{
    Element<T>* newTop;
    newTop = new Element<T> (_val, top);
    top = newTop;
}

template<typename T>
std::string Stack<T>::peek()
{
    return top->getValue();
}

template<typename T>
std::string Stack<T>::pop()
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
