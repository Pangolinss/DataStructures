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

std::string Element::getValue() const
{
    return (this==nullptr) ? ("Value of NULL") : (value);
}
Element* Element::getNext() const
{
    return (this==nullptr) ? (nullptr) : (next);
}
Element* Element::getBefore() const
{
    return (this==nullptr) ? (nullptr) : (before);
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

void Element::operator=(Element other)
{
    next = other.getNext();
    before = other.getBefore();
    value = other.getValue();
}

bool Element::operator==(Element other)
{
    if (next == other.getNext() && before == other.getBefore() && value == other.getValue())
    {
        return true;
    }
    else
    {
        return false;
    }
    return false;
}

void Element::eCopyNext(Element* ele, Element* _first, Element* _last)
{
    Element* eleNext;
    eleNext = new Element("\0", nullptr, nullptr);
    ele = new Element("\0", nullptr, nullptr);
    *ele = *_last;
    if (_last->getBefore() == nullptr)
    {
        ele->setBefore(nullptr);
    }
    if (_last == _first)
    {
         ele->setNext(nullptr);
         return;
    }
    else
    {
        eCopyNext(eleNext, _first, _last->getNext());
        eleNext->setBefore(ele);
        ele->setNext(eleNext);
        return;
    }
}



