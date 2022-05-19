#include <iostream>

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
    Node *newNode = new Node();
    newNode->data = ele;
    newNode->next = NULL;
    cnt++;
    return newNode;
}

void insertBegin(int element)
{
    Node *newNode = createNode(element);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

void insertEnd(int element)
{
    Node *newNode = createNode(element);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *p = head;

        while (p->next != NULL)
        {
            p = p->next;
        }

        p->next = newNode;
    }
}

void insertPosition(int elem, int pos)
{
    if (pos > cnt + 1 || pos <= 0)
    {
        cout << "Position was invalid" << endl;
        if (cnt == 0) {
            cout << "List is empty, use insert start or insert end first" << endl;
        }
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        Node *newNode = createNode(elem);

        for (int i = 1; i < pos; i++)
        {
            prev = curr;
            curr = curr->next;
        }

        newNode->next = curr;
        if (prev == NULL) {
            head = newNode;
        } else {
            prev->next = newNode;
        }
    }
}

void displayList()
{
    if (head == NULL)
    {
        cout << "No elements to print, LinkedList is empty" << endl;
    }
    else
    {
        Node *p = head;
        cout << "Linked List: " << endl;
        while (p != NULL)
        {
            cout << p->data << " --> ";
            p = p->next;
        }
        cout << "END" << endl;
    }
    
}

void deleteStart() 
{
    delete head;
    head = head->next;
}

int main()
{
    int element;
    int choice;

    head = NULL;
    cnt = 0;

    do
    {
        cout << endl;
        cout << "1 Insert Start" << endl;
        cout << "2 Insert End" << endl;
        cout << "3 Insert Position" << endl;
        cout << "4 Delete Start" << endl;
        cout << "5 Delete End" << endl;
        cout << "6 Delete Position" << endl;
        cout << "7 Search" << endl;
        cout << "8 Update" << endl;
        cout << "9 Display" << endl;
        cout << "10 Exit" << endl;
        cout << endl;

        cout << "Enter choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 3)
        {
            cout << "Enter element: ";
            cin >> element;
        }

        switch (choice)
        {
        case 1:
            insertBegin(element);
            break;
        case 2:
            insertEnd(element);
            break;
        case 3:
            int position;
            cout << "Enter position between " << 1 << " and " << cnt + 1 << ": ";
            cin >> position;
            insertPosition(element, position);
            break;
        case 4:
            deleteStart();
            break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            displayList();
            break;
        case 10:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
        }

    } while (choice != 10);
}




