#ifndef STACK_H
#define STACK_H
#include"Element.h"

template<typename T>
class Stack
{
    private:
        Element<T>* top;
    public:
        Stack();
        void push(std::string);
        std::string peek();
        std::string pop();
};

#endif // STACK_H
