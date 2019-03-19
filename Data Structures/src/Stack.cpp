#include "Stack.h"

template<typename T>
Stack<T>::Stack()
{
    top = nullptr;
}

template<typename T>
void Stack<T>::push(T _val)
{
    Element<T>* newTop;
    newTop = new Element<T> (_val, top);
    top = newTop;
}

template<typename T>
T Stack<T>::peek()
{
    return top->getValue();
}

template<typename T>
T Stack<T>::pop()
{
    if (top != nullptr)
    {
        T str = top->getValue();
        top = top->getNext();
        return str;
    }
    else
    {
        assert(false && "Stack::pop() cannot return nullpntr");
        return 0;
    }
}
