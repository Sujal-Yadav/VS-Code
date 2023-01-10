// #include <bits/stdc++.h>
// using namespace std;

// typedef struct node
// {
// 	int data;
// 	int priority;
// 	struct node* next;

// } Node;

// Node* newNode(int d, int p)
// {
// 	Node* temp = (Node*)malloc(sizeof(Node));
// 	temp->data = d;
// 	temp->priority = p;
// 	temp->next = NULL;

// 	return temp;
// }

// // // Return the value at head
// // int peek(Node** head)
// // {
// // 	return (*head)->data;
// // }

// void push(Node** head, int d, int p)
// {
// 	Node* start = (*head);
// 	Node* temp = newNode(d, p);
// 	temp->next = *head;
// 	(*head) = temp;
// }

// // Function to check is list is empty
// int isEmpty(Node** head)
// {
// 	return (*head) == NULL;
// }

// // Driver code
// int main()
// {
// 	Node* pq = newNode(4, 1);
//     int a;
//     cin >> a;
//     cout << "Enter the  number of customers: " << a << endl;
//     for(int i = 0; i < a; i++){
//         int b, c;
//         cout << "Enter the customer's ID: ";
//         cin >> b;
//         cout << endl;
//         cout << "Enter its priority : ";
//         cin >> c;
//         cout << endl;
//         push(&pq, b , c);
//     }
	
// 	while (!isEmpty(&pq) && pq -> priority > 7)
// 	{
// 		cout << pq -> data;
// 	}
// 	return 0;
// }

//
// C++ program to demonstrate min heap for priority queue
#include <iostream>
#include <queue>
using namespace std;

void showpq(
	priority_queue<int, vector<int>, greater<int> > gq)
{
	priority_queue<int, vector<int>, greater<int> > g = gq;
	while (!g.empty()) {
        
		cout << '\t' << g.top();
		g.pop();
	}
}

// Driver Code
int main()
{
    int a;
	priority_queue<int, vector<int>, greater<int> > gquiz;
	cout << "Enter the number of customers ";
    cin >> a;
    for(int i = 0; i < a; i++){
        int b, c;
        cout << "Enter the customer's ID: ";
        cin >> b;
        cout << "Enter its priority : ";
        cin >> c;
        gquiz.push(b);
    }
	cout << "\ngquiz.size() : " << gquiz.size();
	cout << "\ngquiz.top() : " << gquiz.top();

	showpq(gquiz);

	return 0;
}
