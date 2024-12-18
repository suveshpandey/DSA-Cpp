// q2 = find the min value in binary tree
/*
#include<iostream>
#include<climits>
using namespace std;
class Node{      // this is a tree node
    public:
    int val;
    Node* left;
    Node* right;

    Node(int val){         // it is a constructor
        this-> val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void displayTree(Node* root){
    if(root == NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);
}
void findMin(Node* root, int &minimum){
    if(! root) return;
    if(root->left) minimum = min(root->left->val, minimum);
    if(root->right) minimum = min(root->right->val, minimum);

    findMin(root->left,minimum);
    findMin(root->right,minimum);
    
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    
    displayTree(a);
    cout<<endl;

    int minimum = a->val;
    findMin(a, minimum);
    cout<<minimum;
}
*/
