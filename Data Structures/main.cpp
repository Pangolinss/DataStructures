#include<iostream>
#include"Graph.h"
using namespace std;

int main()
{
    Graph graph;
    int arr[] = {1,2,3,4};
    Node* node;
    node = new Node(arr, 4);
    graph.addNode(node);

    return 0;
}
