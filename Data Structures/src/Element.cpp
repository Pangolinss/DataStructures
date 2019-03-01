#include "Element.h"

Element::Element()
{
    value = "\0";
    next = NULL;
}
void Element::setValue (std::string _val)
{
    value = _val;
}
std::string Element::getValue()
{
    return value;
}
Element* Element::getNext()
{
    return next;
}
Element::Element(std::string _val, Element* _ele)
{
    value = _val;
    next = _ele;
}
