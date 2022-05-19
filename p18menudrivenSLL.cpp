#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *next;
};
Node *head;
int cnt;
Node* createNode(int ele)
{
	Node *temp = new Node();
	temp->data = ele;
	temp->next = NULL;
	cnt++;
	return temp;
}
void insertBegin(int ele)
{
	Node *temp = createNode(ele);
	if(head==NULL)
		head = temp;
	else
	{
		temp->next = head;
		head = temp;
	}		
}


void insertEnd(int ele)
{
	Node *temp = createNode(ele);
	if(head == NULL)
	{
		head = temp;
	}
	else
	{
		Node *n;
		for(n=head;n->next!=NULL;n=n->next);		
		n -> next = temp;
	}	
}
/*
nicolas code
void insertPosition(int elem, int pos)
{
    if (pos > cnt+1 || pos <= 0)
    {
        cout << "Position was invalid" << endl;
    }
    else
    {
        Node *curr = head;
        Node *prev = head;
        Node *newNode = createNode(elem);

        for (int i = 1; i < pos; i++)
        {
            prev = curr;
            curr = curr->next;
        }
        newNode->next = curr;
		if(curr==prev)
			head=newNode;
        else
        	prev->next = newNode;
    }
}
*/
/* shoeb

void insertPosition(int ele, int pos)
{
	Node *temp = createNode(ele); //99
	Node *c = head,*p=c;  //11 22 33    c=22 pos=2
	int count = 1;
	while(count!= pos)
	{
		p=c;
		c = c->next;
		count++;
	}
	if(count==1)
	{
		temp->next = head;
		head=temp;
	}	
	else
	{
		p->next = temp;
		temp -> next = c;
	}
	
}
*/


void insertPos(int ele){
	int pos;
	cout<<"\nPlease insert position:\n";
	cin>>pos;
	if (pos == 1) insertBegin(ele); //1-indexing
	else if (pos > cnt + 1||pos < 1) cout<<"Out of bounds";
	else{
		Node *temp = createNode(ele);
		Node *p;
		int i;//11 99 22 33  999
		//i=2 p=11  i=3 p=99
		//i=3 p=99  i=4 p=22
		//i=4 p=22  i=5 p=33
		//i=5 p=33
		for(p = head, i = 2; i < pos; i++, p = p->next);//don't forgot the semicolon
		temp->next = p->next;
		p->next = temp;
	}
}
/*

void insertAnywhere(int index, int ele) {
    if (index < 0 || index > cnt) {
        cout << "\nInvalid index!";
        return;
    }
    int count = 0;
    Node** pos = &head;
    Node* newNode = createNode(ele);
    while (count < index) {
        pos = &(*pos)->next;
        count++;
    }
    //cout<<" *pos = "<<*pos<<" *pos->data = "<<(*pos)->data<<endl;
    newNode->next = *pos;
    *pos = newNode;
}
*/
void deleteBegin(){
	if(head == NULL)
		cout << "\nCannot delete elements from an empty linked list";
	else
	{
		Node *p = head;
		cout<<"\n deleting = "<<p->data<<endl;
		head = p->next;
	  	delete p;	
	    cout<<"\n p->data = "<<p->data<<endl;
		cnt--;	
	}
}

void deleteEnd(){
	if (head == NULL) cout<<"\n No elements in linked list\n";
	else if (head->next == NULL){
		cout<<"\n Deleting = "<<head->data<<endl;
		delete head;
		head = NULL;
		cnt--;
	}
	else{
		Node *p;
		for(p=head;p->next->next!=NULL;p=p->next);	
		cout<<"\n Deleting = "<<p->next->data<<endl;	
		delete p->next;
		p->next = NULL;
		cnt--;
	}
}

void display()
{
	if(head==NULL)
		cout<<"\n No elements in the linked list \n";
	else
	{
		Node *p=head;
		cout<<"\n Linked list  = \n";
		while(p!=NULL)
		{
			cout<<p->data<<" --> ";
			p = p->next;
		}	
	}
}

int main()
{
	int flag=1;
	int ele,ch,pos;
	head = NULL;
	cnt=0;
	do
	{
		cout<<"\n 1 Insert Begin ";
		cout<<"\n 2 Insert End ";
		cout<<"\n 3 Insert Pos ";
		cout<<"\n 4 Delete Begin ";
		cout<<"\n 5 Delete End ";
		cout<<"\n 6 Delete Pos ";
		cout<<"\n 7 Search ";
		cout<<"\n 8 Update ";
		cout<<"\n 9 Display ";
		cout<<"\n 10 Exit ";
		cout<<"\n Enter choice =  ";
		cin>>ch;
		if(ch>=1 && ch<=3)
		{
			cout<<"\nEnter the ele = ";
			cin>>ele;
		}
		switch(ch)
		{
			case 1:insertBegin(ele);break;
			case 2:insertEnd(ele);break;
		/*nicolas code
			case 3:cout<<"\nEnter the pos = ";
				   cin>>pos;
				   insertPosition(ele,pos);break;
				   
		*/
			case 3:insertPos(ele);break;
			/*
			case 3:cout<<"\nEnter the pos = ";
				   cin>>pos;
					insertAnywhere(pos, ele);
					break;
					*/
			case 4:deleteBegin();break;
			case 5:deleteEnd();break;
			case 9:display();break;
			case 10:break;
			default:cout<<"\n Invalid option \n";
		}		
	}while(ch!=10);
}




