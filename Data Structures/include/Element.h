#ifndef ELEMENT_H
#define ELEMENT_H
#include<string>
#include<iostream>


class Element
{
    private:
        Element* next;
        Element* before;
        std::string value;
    public:
        Element();
        void setValue (std::string);
        void setNext(Element*);
        void setBefore(Element*);
        std::string getValue();
        Element* getNext();
        Element* getBefore();
        Element(std::string, Element*);
        Element(std::string, Element*, Element*);
        void point(Element*, Element*);
        Element* eFind(Element*);
};

#endif // ELEMENT_H
