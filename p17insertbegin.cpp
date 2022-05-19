#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *next;
};
int main()
{
	int flag=1;
	int ele;
	Node *head = NULL;
	Node *p;
	while(flag)
	{
		cout<<"\n Enter the element = ";
		cin>>ele;
		Node *temp = new Node();
		temp->data = ele;
		temp->next = NULL;
		if(head==NULL)
			head = temp;
		else
		{
			temp->next = head;
			head = temp;
		}		
		p=head;
		cout<<"\n Linked list  = \n";
		while(p!=NULL)
		{
			cout<<p->data<<" --> ";
			p = p->next;
		}
	}
}
