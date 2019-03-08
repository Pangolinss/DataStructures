#include "Element.h"

Element::Element()
{
    value = "\0";
    next = nullptr;
    before = nullptr;
}
void Element::setValue (std::string _val)
{
    value = _val;
}
void Element::setBefore(Element* ele)
{
    before = ele;
}

void Element::setNext(Element* ele)
{
    next = ele;
}

std::string Element::getValue()
{
    return value;
}
Element* Element::getNext()
{
    return next;
}
Element* Element::getBefore()
{
    return before;
}
Element::Element(std::string _val, Element* _ele)
{
    value = _val;
    next = _ele;
}
Element::Element(std::string _val, Element* ele1, Element* ele2)
{
    value = _val;
    next = ele1;
    before = ele2;
}

void Element::point(Element* ele1, Element* ele2)
{
    next = ele1;
    before = ele2;
}



