#ifndef LINK_H
#define LINK_H

template <class T>
class Link
{
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
    protected:

    private:
        Link* next;
        Link* before;
        T value;
};

#endif // LINK_H
