#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *next;
};
int main()
{
	Node *n = new Node();
	n->data = 11;
	n->next = NULL;
	
	Node *p;
	p = n;
	delete p;
	p=NULL;
	cout<<"\n n->data = "<<p->data;
}
