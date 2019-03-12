#include "Queue.h"

template <typename T>
Queue<T>::Queue()
{
    first = nullptr;
    last = nullptr;
}

template <typename T>
void Queue<T>::enqueue(std::string _val)
{
    Element<T>* newLast;
    newLast = new Element<T>(_val, nullptr);
    if (last != nullptr)
    {
        last->point(newLast, nullptr);
    }
    if (first == nullptr)
    {
        first = newLast;
    }
    last = newLast;
}

template <typename T>
std::string Queue<T>::dequeue()
{
    std::string ret_val = "\0";
    if (first != nullptr)
    {
        ret_val = first->getValue();
        first = first->getNext();
    }
    return ret_val;
}

template <typename T>
Queue<T>::~Queue()
{
    //dtor
}
