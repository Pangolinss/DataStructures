#ifndef GRAPH_H
#define GRAPH_H
#include"Node.h"

class Graph
{
    public:
        Graph();
        void setOrigin(Node*);
        void addNode(Node*, Node*, int*);
        virtual ~Graph();

    private:
        Node* origin;
};

#endif // GRAPH_H
