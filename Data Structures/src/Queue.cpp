#include "Queue.h"

Queue::Queue()
{
    first = nullptr;
    last = nullptr;
}

void Queue::enqueue(std::string _val)
{
    Element* newLast;
    newLast = new Element(_val, nullptr);
    if (last != nullptr)
    {
        last->point(newLast);
    }
    if (first == nullptr)
    {
        first = newLast;
    }
    last = newLast;
}

std::string Queue::dequeue()
{
    std::string ret_val = "\0";
    if (first != nullptr)
    {
        ret_val = first->getValue();
        first = first->getNext();
    }
    return ret_val;
}

Queue::~Queue()
{
    //dtor
}
