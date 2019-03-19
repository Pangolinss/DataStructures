# DataStructures
Code for my data structures

Changelog 


2019-03-11


-Link is a useless file, not needed.

-Templated "Element" and "LinkList", but not "stack" and "queue".

-To work with templates the "value" in "Element" is now a pointer, however all "get" functions return the actual value of the pointer.

-Becuase of the way header files and source files are compiled I have to write out what objects are allowed in the template. Currently    std::string, int, char, double, and bool are allowed.
