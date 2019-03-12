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

        void enqueue(std::string);
        std::string dequeue();
};

#endif // QUEUE_H
