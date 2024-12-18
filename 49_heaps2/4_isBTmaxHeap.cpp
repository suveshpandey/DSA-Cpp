#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
    }
};
void inorder(Node* root, vector<int>& arr){
    if(root == NULL) return ;
    inorder(root->right, arr);
    arr.push_back(root->val);
    inorder(root->left, arr);
    
}
void print(vector<int> arr){
      for(int i = 0; i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void preorder(Node* root, vector<int>& arr, int& i){
    if(root == NULL) return;
    root->val = arr[i++];
    arr.push_back(root->val);
    preorder(root->left, arr, i);
    preorder(root->right, arr, i);
}
bool isMax(Node* root){
    if(root == NULL) return false;
    if(root->left != NULL && root->val < root->left->val) return false;
    if(root->right!= NULL && root->val < root->right->val) return false;
    return isMax(root->left) && isMax(root->right);

}
int main(){
    Node* a = new Node(20);
    Node* b = new Node(15);
    Node* c = new Node(10);
    Node* d = new Node(8);
    Node* e = new Node(11);
    Node* f = NULL;
    Node* g = new Node(6);

    a->left = b; a->right = c; 
    b->left = d; b->right = e; 
    c->left = f; c->right = g; 
    cout<<isMax(a);
    
  
}