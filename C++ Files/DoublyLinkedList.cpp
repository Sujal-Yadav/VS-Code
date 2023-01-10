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

// insert at head / start
void insertHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    // temp->data = d;
    temp->next = head;
    head->prev = temp;
    head = temp;
}

// insert at tail / last
int insertTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    // temp->data = d;
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
    return tail-> data;
}

void insertAtPosition(Node *&head, Node *&tail, int posi, int d)
{

    Node *temp = head;
    int cnt = 1;

    // Insert At Head
    if (posi == 1)
    {
        insertHead(head, d);
        return;
    }

    while (cnt < posi - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        insertTail(tail, d);
        return;
    }

    Node *insertnode = new Node(d);
    // insertnode->data = d;
    insertnode->next = temp->next;
    temp->next->prev = insertnode;
    temp->next = insertnode;
    insertnode->prev = temp;
}

void deleteNode(Node *&head, Node *&tail, int posi)
{

    if (posi == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        free(temp);
    }
    else
    {
        Node *curr = head;
        Node *previous = NULL;
        int cnt = 1;
        while (cnt < posi)
        {
            previous = curr;
            curr = curr->next;
            cnt++;
        }

        previous->next = curr->next;
        // curr -> next -> prev = curr -> prev;
        curr->next = NULL;
        if (previous->next == NULL)
        {
            tail = previous;
        }
        free(curr);
    }
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int length(Node* head){
    Node* temp = head;
    int a = 0;
    while(temp != NULL){
        a++;
        temp = temp -> next;
    }
    return a;
}

void search(Node *&head, Node *&tail, int posi2, int data1)
{
    Node* temp = head;
    int cnt = 1;
    
    while (temp -> data != data1){
        temp = temp -> next;
        cnt++;
    }

    if(temp -> data == data1){
        insertTail(tail, data1);
        deleteNode(head , tail, length(head));
    }
    cout << cnt;

    if(cnt - 1 < length(head)){
        insertAtPosition(head, tail, posi2, data1);
    }
    

}

int main()
{
    Node *node1 = new Node(11);
    Node *head = node1;
    Node *tail = node1;

    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int b;
        cin >> b;
        insertTail(tail, b);
    }
    print(head);
    int posi1, data1;
    cin >> data1 >> posi1;
    search(head, tail, posi1, data1);
    print(head);
    // length(head);
    // print(head);

    
    // // print(head);
    // insertHead(head, 12);
    // // print(head);

    // insertHead(head, 15);
    // // print(head);

    // insertTail(tail, 20);
    // // print(head);

    // insertTail(tail, 30);
    // // print(head);

    // insertTail(tail, 19);
    // // print(head);

    // insertAtPosition(head, tail, 3, 6);
    // // print(head);

    // insertAtPosition(head, tail, 1, 9);
    // // print(head);

    // insertAtPosition(head, tail, 9, 14);
    // // print(head);

    // insertAtPosition(head, tail, 10, 9);
    // print(head);

    // deleteNode(head, tail, 10);
    // print(head);

    // cout << "Head is: " << head -> data << endl;
    // cout << "Tail is: " << tail -> data << endl;
}