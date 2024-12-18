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
void preorder(Node* root){
    if(root == NULL) return;  // base case
    cout<<root->val<<" ";        // root   work
    preorder(root->left);        // left
    preorder(root->right);        // right
}
void inorder(Node* root){
    if(root == NULL) return;
    inorder(root->left);   //left
    cout<<root->val<<" ";   //  root    work
    inorder(root->right);    // right
}
void postorder(Node* root){
    if(root == NULL) return;
    postorder(root->left);    //left
    postorder(root->right);    //right
    cout<<root->val<<" ";     //root   work
}
int main(){
    Node* a = new Node(1);   // root node
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
    
    preorder(a);
    cout<<endl;
    inorder(a);
    cout<<endl;
    postorder(a);

    
}
