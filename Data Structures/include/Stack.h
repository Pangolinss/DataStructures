#ifndef STACK_H
#define STACK_H
#include"Element.h"

class Stack
{
    private:
        Element* top;
    public:
        Stack();
        void push(std::string);
        std::string peek();
        std::string pop();
};

#endif // STACK_H
