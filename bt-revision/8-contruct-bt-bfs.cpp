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

void display(Node* root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left != nullptr) q.push(temp->left);
        if(temp->right != nullptr) q.push(temp->right);
    }
}

Node* construct(vector<int> &nums, int n){
    queue<Node*> q;
    Node* root = new Node(nums[0]);
    q.push(root);

    int i = 1, j = 2;

    while(!q.empty() && i<n){
        Node* temp = q.front();
        q.pop();

        Node* l;
        Node* r;

        if(nums[i] != INT_MIN) l = new Node(nums[i]);
        else l = nullptr;
        if(j<n && nums[j] != INT_MIN) r = new Node(nums[j]);
        else r = nullptr;

        temp->left = l;
        temp->right = r;

        if(l != nullptr) q.push(l);
        if(r != nullptr) q.push(r);

        i+=2, j+=2;
    }

    return root;
}

void preorder(Node* root, vector<int> &pre){
    if(root == nullptr) return;
    pre.push_back(root->val);
    preorder(root->left, pre);
    preorder(root->right, pre);
}
void postorder(Node* root, vector<int> &pre){
    if(root == nullptr) return;
    postorder(root->left, pre);
    postorder(root->right, pre);
    pre.push_back(root->val);
}

int main(){
    // vector<int> nums = {1, 2, 3, 4, 5, INT_MIN, 6, INT_MIN, INT_MIN, 7, 8, 9};
    
    vector<int> nums = {1, 2, 2, 3, 4, 4, 3};
    Node* root = construct(nums, nums.size());
    vector<int> temp;
    preorder(root, temp);
    // display(root);
    for(int ele : temp) cout<<ele<<" ";


}