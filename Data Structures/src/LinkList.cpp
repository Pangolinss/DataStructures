#include "LinkList.h"

LinkList::LinkList()
{
    first = nullptr;
    last = nullptr;
}

void LinkList::append(std::string _str)
{
    Element* ele;
    ele = new Element(_str, last, nullptr);
    if (last != nullptr)
    {
        last->setBefore(ele);
    }
    if (first == nullptr)
    {
        first = ele;
    }
    last = ele;
    return;
}

void LinkList::append(Element* ele)
{
    ele->point(last, nullptr);
    if (last != nullptr)
    {
        last->setBefore(ele);
    }
    if (first == nullptr)
    {
        first = ele;
    }
    last = ele;
    return;
}

void LinkList::add(std::string str, Element* inFrontOfThis)
{
    Element* ele;
    ele = new Element(str, inFrontOfThis->getNext(), inFrontOfThis);
    if (inFrontOfThis != nullptr)
    {
        if (inFrontOfThis == first)
        {
            inFrontOfThis->setNext(ele);
            first = ele;
        }
        else
        {
            inFrontOfThis->getNext()->setBefore(ele);
            inFrontOfThis->setNext(ele);
        }
    }
    else
    {
        //Should they be able to add a nullpntr to a list?
        //Im going to go with no, if they want to split a list ill make a function for that
    }
}

void LinkList::linkElements(Element* ele1, Element* ele2)
{
    ele1->setBefore(ele2);
    ele2->setNext(ele1);
}

Element* LinkList::getFirst() const
{
    return first;
}

Element* LinkList::getLast() const
{
    return last;
}

Element* LinkList::lfind(int num)
{
    Element* ele;
    ele = first;
    int i = 0;
    while (i<num && ele != nullptr)
    {
        ele = ele->getBefore();
        if (ele == nullptr)
        {
            return nullptr;
        }
        i++;
    }
    return ele;
}

std::string LinkList::lremove(Element* ele)
{
    if (ele != nullptr)
    {
        std::string val = ele->getValue();
        if (first != nullptr && last != nullptr)
        {
            if (ele == first && ele == last)
            {
                first = nullptr;
                last = nullptr;
            }
            else if (ele->getNext() != nullptr && ele->getBefore() != nullptr)
            {
                ele->getBefore()->setNext(ele->getNext());
                ele->getNext()->setBefore(ele->getBefore());
            }
            else if (ele == first)
            {
                first = ele->getBefore();
                ele->getBefore()->setNext(nullptr);
            }
            else if (ele == last)
            {
                last = ele->getNext();
                ele->setNext(nullptr);
            }
            ele->point(nullptr, nullptr);
            return val;
        }
    }
    else
    {
        return "\0";
    }
    return "\0";
}

void LinkList::operator=(LinkList other)
{
    Element* point;
    Element* _list = new Element;
    Element* actualList;

    point = other.getLast();

    *_list = *point;
    actualList = _list;


    point = point->getNext();
    _list = new Element;

    actualList->setNext(_list);
    actualList->setBefore(nullptr);
    _list->setBefore(actualList);

    last = actualList;

    while (point != other.getFirst())
    {
        *_list = *point;
        actualList = _list;

        point = point->getNext();
        _list = new Element;

        actualList->setNext(_list);
        _list->setBefore(actualList);
    }
    *_list = *point;
    first = _list;
}

Element* LinkList::operator[](int num)
{
    Element* ele;
    ele = first;
    int i = 0;
    while (i<num && ele != nullptr)
    {
        ele = ele->getBefore();
        if (ele == nullptr)
        {
            return nullptr;
        }
        i++;
    }
    return ele;
}

LinkList::~LinkList()
{
    //dtor
}
