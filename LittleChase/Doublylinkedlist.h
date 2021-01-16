#include<iostream>
using namespace std;
class Node
{
	int data;
	Node* next;
	Node* prev;
public:
	Node();
	~Node();
	int getData();
	void setData(int Data);
	Node* getNext();
	void setNext(Node* Next);
	Node* getPrev();
	void setPrev(Node* prev);
	Node& operator=(const Node& r);
};

class Doublylinkedlist
{
	int sizeOfLinked ;
	Node* head;
	Node* tail;
public:
	Doublylinkedlist() ;
	bool add(Node* data, int pos);
	bool remove(int pos);
	bool replace(Node* old, Node* newNode);
	int search(Node* data);
	Node* nodeAt(int pos);
	void display_forward();
	void display_backward();
	int size();
	Doublylinkedlist& operator=(const Doublylinkedlist& r);
};
