#ifndef NODE_H
#define NODE_H

class Node
{
private:
    /* data */
    int data = 0;
    Node* pointerToNext = nullptr;
public:
    Node(/* args */);
    ~Node();
    //getters
    int getData();
    Node* getPointer();
    //setters
    void setData(int dataIn);
    void setPointer(Node* pointerIn);
};

Node::Node(/* args */)
{
}

Node::~Node()
{
}

int Node::getData()
{
}

Node* Node::getPointer()
{
}

void Node::setData(int dataIn)
{
}

void Node::setPointer(Node* pointerIn)
{
}

#endif