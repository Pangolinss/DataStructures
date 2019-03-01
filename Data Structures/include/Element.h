#ifndef ELEMENT_H
#define ELEMENT_H
#include<string>


class Element
{
    private:
        Element* next;
        std::string value;
    public:
        Element();
        void setValue (std::string);
        std::string getValue();

        Element* getNext();
        Element(std::string, Element*);
};

#endif // ELEMENT_H
