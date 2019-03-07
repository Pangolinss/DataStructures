#include "LinkList.h"

LinkList::LinkList()
{
    first = nullptr;
    last = nullptr;
    size = 0;
}

int LinkList::add(std::string _str)
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
    size++;
    return size;
}

int LinkList::add(Element* ele)
{
    ele->point(last, nullptr);
    last = ele;
    size++;
    return size;
}

Element* LinkList::getFirst()
{
    std::cout<<first->getValue()<<std::endl;
    return first;
}

Element* LinkList::getLast()
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
        ele = ele->getNext();
        i++;
    }
    std::cout<<ele->getValue()<<std::endl;
    return ele;
}

std::string LinkList::lremove(Element* ele)
{
    std::string val = ele->getValue();
    if (first != nullptr && last != nullptr)
    {
        if (ele->getNext() != nullptr && ele->getBefore() != nullptr)
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
        size--;
        return val;
    }
    else
    {
        return "\0";
    }
}

LinkList::~LinkList()
{
    //dtor
}
