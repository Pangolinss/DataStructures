#include "Queue.h"

Queue::Queue()
{
    first = nullptr;
    last = nullptr;
}

void Queue::enqueue(std::string _val)
{
    Element* newLast;
    newLast = new Element(_val, last);
    if (first == nullptr)
    {
        first = newLast;
    }
    last = newLast;
}

void Queue::dequeue()
{

}

Queue::~Queue()
{
    //dtor
}
