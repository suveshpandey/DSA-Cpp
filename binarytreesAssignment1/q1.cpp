// q1 = find the product of each node of a binary tree
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

void findProduct(Node* root, long long int &product){
    if(!root) return;
    if(root->left) product *= root->left->val;
    if(root->right) product *= root->right->val;

    findProduct(root->left, product);
    findProduct(root->right, product);
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

    long long int product = a->val;
    findProduct(a, product);
    cout<<product;
   
}
