#include<bits/stdc++.h>
using namespace std;

class Node{
    public:

    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};
int levels(Node* root){
    if(root == nullptr) return 0;
    return 1 + max(levels(root->left), levels(root->right));
}
void display(Node* root, int level, int desiredLevel){ //left to right
    if(root == nullptr) return;
    if(level == desiredLevel){
        cout<<root->val<<" ";
        return;
    }
    display(root->left, level+1, desiredLevel);
    display(root->right, level+1, desiredLevel);
}
void displayRev(Node* root, int level, int desiredLevel){ //right to left
    if(root == nullptr) return;
    if(level == desiredLevel){
        cout<<root->val<<" ";
        return;
    }
    display(root->right, level+1, desiredLevel);
    display(root->left, level+1, desiredLevel);
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

    int noOfLevels = levels(a);

    for(int i = 0; i < noOfLevels; i++){
        display(a, 0, i);
        cout<<endl;
    }
    cout<<endl<<"----------------------"<<endl;
    for(int i = 0; i < noOfLevels; i++){
        displayRev(a, 0, i);
        cout<<endl;
    }
}