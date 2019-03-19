#ifndef QUEUE_H
#define QUEUE_H
#include"Element.h"

template<typename T>
class Queue
{
    private:
        Element<T>* first;
        Element<T>* last;
    public:
        Queue();
        virtual ~Queue();

        void enqueue(T);
        T dequeue();
};

#endif // QUEUE_H
