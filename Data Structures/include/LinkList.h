#ifndef LINKLIST_H
#define LINKLIST_H
#include"Element.h"


class LinkList
{
    public:
        LinkList();
        int add(std::string);
        int add(Element*);
        Element* getFirst();
        Element* getLast();
        Element* lfind(std::string);
        Element* lfind(int);
        std::string lremove(Element*);

        virtual ~LinkList();

    private:
        Element* first;
        Element* last;
        int size;
};

#endif // LINKLIST_H
