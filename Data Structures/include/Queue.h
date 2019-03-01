#ifndef QUEUE_H
#define QUEUE_H
#include"Element.h"


class Queue
{
    private:
        Element* first;
        Element* last;
    public:
        Queue();
        virtual ~Queue();

        void enqueue(std::string);
};

#endif // QUEUE_H
