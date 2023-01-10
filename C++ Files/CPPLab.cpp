#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node *prev;

};

void delete_last(Node* head)
{
    Node *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    Node *temp = current;
    current->prev->next = NULL;
    free(temp);
    return;
}

void reverse(Node **head_ref)
{
    Node *temp = NULL;
    Node *current = *head_ref;

    while (current != NULL)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    if (temp != NULL)
        *head_ref = temp->prev;
}

void push(Node** head_ref, int d)
{
    Node* temp = new Node();
    temp->data = d;
    temp->prev = NULL;
    temp->next = (*head_ref);
    if ((*head_ref) != NULL)
        (*head_ref)->prev = temp;
        (*head_ref) = temp;
}

void printList(Node *node)
{
    if (node != NULL)
    {
        int i = 1;
        while (node != NULL)
        {
            cout << "Data in " << i << " node: " << node->data << endl;
            i++;
            node = node->next;
        }
    }
}

int main()
{
    Node* node1 = new Node();
    Node* head = node1;
    Node* tail = node1;
    int n;
    cin >> n;
    cout << "Enter the total number of nodes in the list: " << n << endl;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        cout << "Enter data of " << i << " node: " << a << endl;
        push(&tail, a);
    }
    
    if (n != 0)
    {
        reverse(&head);
        cout << "DOUBLY LINKED IS CREATED SUCCESSFULLY" << endl;
        cout << "DATA IN THE LIST:" << endl;
        printList(head);
        delete_last(head);
        cout << "SUCCESSFULLY DELETED NODE FROM END OF THE LIST." << endl;
        cout << "DATA IN THE LIST:" << endl;
        printList(head);
    }
    else
    {
        cout << "List is empty.";
    }

    return 0;
}