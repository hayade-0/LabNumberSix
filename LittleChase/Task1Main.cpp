#include<iostream>
#include"Doublylinkedlist.h"
using namespace std;
int main()
{
	Node* GeorgeWashington=new Node();
	GeorgeWashington->setData(1);
	Node* JohnAdams = new Node;
	JohnAdams->setData(2);
	Node* ThomasJefferson = new Node;
	ThomasJefferson->setData(3);
	Node* HusseinObama = new Node;
	HusseinObama->setData(44);
	Doublylinkedlist AmericanPresident;
	AmericanPresident.add(GeorgeWashington, 0);
	AmericanPresident.display_forward();
	AmericanPresident.add(JohnAdams, 0);
	AmericanPresident.display_forward();
	cout << AmericanPresident.remove(1) << endl;
	AmericanPresident.display_forward();
	AmericanPresident.add(JohnAdams, 0);
	AmericanPresident.add(ThomasJefferson, 1);
	AmericanPresident.replace(GeorgeWashington, HusseinObama);
	AmericanPresident.display_forward();
	AmericanPresident.display_backward();

}