#ifndef NODE_H
#define NODE_H
#include "LinkList.h"

class Node
{
    public:
        Node();
        Node(int[], int);
        Node* getConnection(int);
        int* getMagnitude(int);

        void addConnection(Node*);
        void addMagnitude(int*);

        virtual ~Node();

    private:
        LinkList<int*> magnitude;
        LinkList<Node*> connections;
        int* value;
};

#endif // NODE_H
