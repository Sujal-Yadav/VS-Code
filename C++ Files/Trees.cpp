#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};



Node* insertIntoBST(Node* root, int d){
    if(root == NULL){
        root = new Node(d);
        return root;
    }

    if(d > root -> data){
        root -> right = insertIntoBST(root -> right, d);
    }

    else{
        root -> left = insertIntoBST(root -> left, d);
    }

    return root; 
}

Node* takeInput(Node* &root){

    int data;
    cin >> data;

    while(data != -1){
        insertIntoBST(root, data);
        cin >> data;
    }

    // root -> left = buildTree(root -> left);
    // root -> right = buildTree(root -> right);
    // return root;
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        Node* temp = q.front();
        cout << temp -> data << " ";
        q.pop();

        if(temp -> left){
            q.push(temp -> left);
        }

        if(temp -> right){
            q.push(temp -> right);
        }
    }
    
}

int main(){

    Node* root = NULL;

    // root = buildTree(root);
    takeInput(root);
 
    levelOrderTraversal(root);
}