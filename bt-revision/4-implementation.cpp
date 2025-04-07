#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void display(Node* root){
    if(root == NULL) return;

    cout<<root->val<<" "; 
    display(root->left);
    display(root->right);
}
int sum(Node* root){
    if(root == NULL) return 0;

    int result = root->val + sum(root->left) + sum(root->right);

    return result;
}
int prod(Node* root){
    if(root == NULL) return 1;

    int result = root->val * prod(root->left) * prod(root->right);

    return result;
}
int size(Node* root){
    if(root == NULL) return 0;
    return 1 + size(root->left) + size(root->right);
}
int mxNode(Node* root){
    if(root == NULL) return INT_MIN;
    return max(root->val, max(mxNode(root->left), mxNode(root->right)));
}
int mnNode(Node* root){
    if(root == NULL) return INT_MAX;
    return min(root->val, min(mxNode(root->left), mxNode(root->right)));
}
int levels(Node* root){
    if(root == NULL) return 0;
    return 1 + max(levels(root->left), levels(root->right));
}
int height(Node* root){
    if(root == NULL) return -1;
    return 1 + max(height(root->left), height(root->right));
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

    display(a);
    cout<<endl;
    
    cout<<"sum = "<<sum(a)<<endl;
    
    cout<<"prod = "<<prod(a)<<endl;

    cout<<"size = "<<size(a)<<endl;

    cout<<"mxNode = "<<mxNode(a)<<endl;

    cout<<"mnNode = "<<mnNode(a)<<endl;

    cout<<"levels = "<<levels(a)<<endl;

    cout<<"height = "<<height(a)<<endl;
}