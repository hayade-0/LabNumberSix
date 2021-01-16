#include "Doublylinkedlist.h"

Node::Node()
{
    data=0;
    next=nullptr;
    prev = nullptr;
}

Node::~Node()
{
    delete this;
}

int Node::getData()
{
    return data;
}

void Node::setData(int Data)
{
    this->data = Data;
}

Node* Node::getNext()
{
    return next;
}

void Node::setNext(Node* Next)
{
    if (Next ==nullptr)
        this->next = nullptr;
    else
         next = Next;
}

Node* Node::getPrev()
{
    return prev;
}

void Node::setPrev(Node* prev)
{
    if (prev == nullptr)
        this->prev = nullptr;
    else
        this->prev = prev;
}

Node& Node::operator=(const Node& r)
{
    data = r.data;
    next = r.next;
    prev = r.prev;
    return*this;
}

Doublylinkedlist::Doublylinkedlist()
{
    sizeOfLinked=0;
    head=nullptr;
    tail=nullptr;
}

bool Doublylinkedlist::add(Node* data, int pos)
{
    if ((pos > sizeOfLinked) || (data == nullptr))
        return false;
    if (sizeOfLinked == 0)
    {
        head = data;
        sizeOfLinked = 1;
        data->setPrev(nullptr);
        data->setNext(nullptr);
        return 1;
    }
    
    else// dont forget to assign tail
    {
        Node* prevNode = nodeAt(pos);
        Node* afterNode = nodeAt(pos+1);
        prevNode->setNext(data);
        if (afterNode!=nullptr)
            afterNode->setPrev(data);
        data->setNext(afterNode);
        data->setPrev(prevNode);
        sizeOfLinked = sizeOfLinked + 1;
        tail = nodeAt(sizeOfLinked-1);
        return 1;
    }
}
Doublylinkedlist& Doublylinkedlist::operator=(const Doublylinkedlist& r)
{
    sizeOfLinked = r.sizeOfLinked;
    head = r.head;
    tail = r.tail;
    return*this;
}
bool Doublylinkedlist::remove(int pos)
{
    
    Node* nodeToRemove = nodeAt(pos);
    if (nodeToRemove == nullptr)
        return 0;
    else
    {
        Node* prevNode = nodeAt(pos - 1);
        Node* afterNode = nodeAt(pos+1);
        prevNode->setNext(afterNode);
        if(afterNode!=nullptr)
            afterNode->setPrev(prevNode);
        sizeOfLinked = sizeOfLinked - 1;
        //delete nodeToRemove;
        return 1;

    }
}
bool Doublylinkedlist::replace(Node* old, Node* newNode)
{
    if ((search(old) == -1) || (newNode == nullptr))
        return 0;
    else
    {
        old->setData(newNode->getData());//this is shortest way instead of copying info from old to new
        //delete newNode;
        return 1;
    }
}

int Doublylinkedlist::search(Node* data)
{
  
    for (int i = 0; i < sizeOfLinked; i++)
    {
        
        if ((nodeAt(i)->getData() == data->getData()) && (nodeAt(i)->getNext() == data->getNext()) && (nodeAt(i)->getPrev() == data->getPrev()))
            return(i);
    }
    return -1;
}

Node* Doublylinkedlist::nodeAt(int pos)
{
    if (pos > sizeOfLinked-1)
        return nullptr;
    else
    {
        int index = 0;
        Node* searchingNode = new Node;
        searchingNode = head;
        while (index < pos)
        {
            searchingNode = searchingNode->getNext();
            index = index + 1;
        }
        return searchingNode;
    }
    
}
void Doublylinkedlist::display_forward()
{
    int index = 0;
    while (index < sizeOfLinked)
    {
        cout << nodeAt(index)->getData() << " ";
        index = index + 1;
    }
    cout << endl;
    
}
void Doublylinkedlist::display_backward()
{
    int index = sizeOfLinked-1;
    while ((index >0)||(index==0))
    {
        cout << nodeAt(index)->getData() << " ";
        index = index - 1;
    }
    cout << endl;

}
int Doublylinkedlist::size()
{
    return sizeOfLinked;
}