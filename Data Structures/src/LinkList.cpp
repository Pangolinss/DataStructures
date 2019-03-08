#include "LinkList.h"

LinkList::LinkList()
{
    first = nullptr;
    last = nullptr;
}

void LinkList::add(std::string _str)
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

void LinkList::add(Element* ele)
{
    ele->point(last, nullptr);
    last = ele;
}

void LinkList::linkElements(Element* ele1, Element* ele2)
{
    ele1->setBefore(ele2);
    ele2->setNext(ele1);
}

Element* LinkList::getFirst()
{
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
        ele = ele->getBefore();
        i++;
    }
    return ele;
}

std::string LinkList::lremove(Element* ele)
{
    std::string val = ele->getValue();
    std::cout<<"This is the value im removing "<<val<<std::endl;
    if (first != nullptr && last != nullptr && ele != nullptr)
    {
        if (ele->getNext() != nullptr && ele->getBefore() != nullptr)
        {
            ele->getBefore()->setNext(ele->getNext());
            ele->getNext()->setBefore(ele->getBefore());
            std::cout<<"not first or last"<<std::endl;
        }
        else if (ele == first)
        {
            first = ele->getBefore();
            ele->getBefore()->setNext(nullptr);
            std::cout<<"first"<<std::endl;
        }
        else if (ele == last)
        {
            last = ele->getNext();
            ele->setNext(nullptr);
            std::cout<<"last"<<std::endl;
        }
        ele->point(nullptr, nullptr);
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
