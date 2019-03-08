#ifndef LINKLIST_H
#define LINKLIST_H
#include"Element.h"


class LinkList
{
    public:
        LinkList();
        void add(std::string);
        void add(Element*);
        void linkElements(Element*, Element*);
        Element* getFirst();
        Element* getLast();
        Element* lfind(std::string);
        Element* lfind(int);
        std::string lremove(Element*);

        virtual ~LinkList();

    private:
        Element* first;
        Element* last;
};

#endif // LINKLIST_H
