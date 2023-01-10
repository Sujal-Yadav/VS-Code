#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int d){

    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){

    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int posi, int d){

    Node* temp = head;
    int cnt = 1;

    if(posi == 1){
        insertAtHead(head, d);
        return;
    }

    while(cnt < posi - 1){
        temp = temp -> next;
        cnt++;
    }

    if(temp -> next == NULL){    
        insertAtTail(tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

void deleteNode(Node* &head, Node* &tail, int posi){

    if(posi == 1){
        Node* temp = head;
        cout << "Memory is free for the node with tha data: " << temp -> data << endl;
        head = head -> next;
        temp -> next = NULL;
        free(temp);
    }

    else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;    
        while(cnt < posi){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        if(prev -> next == NULL){
            tail = prev;
        }
        cout << "Memory is free for the node with tha data: " << curr -> data << endl;
        free(curr);
    }
}

void printNode(Node* &head){

    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail, 12);
    insertAtTail(tail, 15);
    insertAtPosition(head, tail, 4, 22);
    printNode(head);
    deleteNode(head, tail, 4);
    printNode(head);

    cout << "Head: " << head -> data << endl;
    cout << "Tail: " << tail -> data << endl;

    insertAtTail(tail, 20);
    printNode(head);
    
    cout << "Head: " << head -> data << endl;
    cout << "Tail: " << tail -> data << endl;
}