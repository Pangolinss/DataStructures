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
        Element();//Default constructor

        //Get and Set functions
        void setValue (std::string);
        void setNext(Element*);
        void setBefore(Element*);
        std::string getValue() const;
        Element* getNext() const;
        Element* getBefore() const;

        //Other constructors, usually don't use them
        Element(std::string, Element*);
        Element(std::string, Element*, Element*);

        //Basically a set function, points the elements to other things
        void point(Element*, Element*);

        //Assignment and comparison operator
        void operator=(Element);
        bool operator==(Element);

        //Functions that don't work
        void eCopyNext(Element*, Element*, Element*)//An attempt to recursively copy things, dosen't work use the LinkList assignment operator
};

#endif // ELEMENT_H
