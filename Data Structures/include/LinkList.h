#ifndef LINKLIST_H
#define LINKLIST_H
#include"Element.h"


class LinkList
{
    public:
        LinkList();//Default constructor

        //Append and Add
        void append(std::string);//add element to the end of a link list
        void append(Element*);
        void add(std::string, Element*);//add element to the front of an element
        void add(Element*, Element*);

        //Links two elements
        void linkElements(Element*, Element*);//links to elements together

        //Get and set functions
        Element* getFirst() const;
        Element* getLast() const;

        //Finds a certain element, returns a pointer
        Element* lfind(std::string);
        Element* lfind(int);//Returns a pointer to an element given a position

        //Removing functions
        std::string lremove(Element*);//Removes an element

        //Assingment operator
        void operator=(LinkList);

        //Finding operator. Once I template these data structures I am going to make this return the actual value rather than a pointer
        Element* operator[](int);

        virtual ~LinkList();

    private:
        Element* first;
        Element* last;
};

#endif // LINKLIST_H
