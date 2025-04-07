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

int countLevels(Node* root){
    if(root == nullptr) return 0;
    return 1 + max(countLevels(root->left), countLevels(root->right));
}

void preorder(Node* root, int level, vector<int> &result){
    if(root == nullptr) return;
    result[level] = root->val;
    preorder(root->left, level+1, result);
    preorder(root->right, level+1, result);
}

int main(){
    vector<int> nums = {1, 2, 3, 4, 5, INT_MIN, 6, INT_MIN, INT_MIN, 7, 8, 9};
    Node* root = construct(nums, nums.size());

    int levels = countLevels(root);
    vector<int> result(levels);
    preorder(root, 0, result);
    
    for(auto ele : result) cout<<ele<<" ";
}