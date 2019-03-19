#include "Queue.h"

template <typename T>
Queue<T>::Queue()
{
    first = nullptr;
    last = nullptr;
}

template <typename T>
void Queue<T>::enqueue(T _val)
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
T Queue<T>::dequeue()
{
    T ret_val;
    if (first != nullptr)
    {
        ret_val = first->getValue();
        first = first->getNext();
    }
    else
    {
        assert(false && "Queue::dequeue() cannot value of a nullpntr");
    }
    return ret_val;
}

template <typename T>
Queue<T>::~Queue()
{
    //dtor
}

template class Queue <std::string>;
template class Queue <int>;
template class Queue <char>;
template class Queue <bool>;
template class Queue <double>;
template class Queue <int*>;
