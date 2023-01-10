// Question - 3
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertToNode(Node *&head, int d)
{
    Node *temp = new Node();
    temp->data = d;
    temp->next = head;
    head = temp;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main()
{
    int year, num;
    char a;

    Node *head = new Node();
    do
    {
        cout << "Enter the year: ";
        cin >> year;
        if (year % 100 == 0 || year % 4 == 0)
        {
            insertToNode(head, year);
        }
        cout << "Would you like to enter another year: y/n ";
        cin >> a;
    }

    while (a != 'n');
    print(head);
    if (head->next == NULL || head == NULL)
    {
        cout << " Stack is empty";
    }
}

// Question - 2
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> vec;
//     for (int i = 0; i < 10; i++)
//     {
//         int a;
//         cin >> a;
//         if (a % 2 != 0)
//         {
//             continue;
//         }
//         vec.push_back(a);
//     }
//     if (vec.empty())
//     {
//         cout << "Stack is empty";
//         return 0;
//     }

//     for (int i = vec.size() - 1; i >= 0; i--)
//     {
//         cout << vec.at(i) << endl;
//     }
// }