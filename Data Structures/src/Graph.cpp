#include "Graph.h"

Graph::Graph()
{
    origin = nullptr;
    //ctor
}

void Graph::setOrigin(Node* node)
{
    origin = node;
}

void Graph::addNode(Node* onThis, Node* node, int* mag)
{
    onThis->addConnection(node);
    onThis->addMagnitude(mag);
}

Graph::~Graph()
{
    //dtor
}
