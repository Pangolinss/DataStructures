#include "Node.h"

Node::Node()
{
    //ctor
}

Node::Node(int arr[], int arrsize)
{
    value = new int[arrsize];
    for (int i = 0; i<arrsize; i++)
    {
        value[i] = arr[i];
    }
}

Node* Node::getConnection(int i)
{
    return connections[i]->getValue();
}

int* Node::getMagnitude(int i)
{
    return magnitude[i]->getValue();
}

void Node::addConnection(Node* _node)
{
    connections.append(_node);
}

void Node::addMagnitude(int* vec)
{
    magnitude.append(vec);
}

Node::~Node()
{
    //dtor
}
