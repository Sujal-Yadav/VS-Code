#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insertHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtPosition(Node *&head, Node *&tail, int posi, int d)
{

    Node *temp = head;
    Node *insertnode = new Node(d);
    insertnode->next = temp->next;
    temp->next->prev = insertnode;
    temp->next = insertnode;
    insertnode->prev = temp;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(1);
    Node *head = node1;
    Node *tail = node1;

    for (int i = 0; i < 7; i++)
    {
        int a;
        cin >> a;
        cout << "Enter marks: " << a << endl;
        insertTail(tail, a);
    }
    int b;
    cin >> b;
    insertAtPosition(head, tail, 2, b);
    cout << "Enter marks of missed student: " << b << endl;
    print(head);
}