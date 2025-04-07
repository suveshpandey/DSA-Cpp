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

long long findMxSum(Node* root, long long &mxSum){
    long long currSum = 0;
    
}

int main(){
    vector<int> nums = {-10,9,20,INT_MIN,INT_MIN,15,7};
    Node* root = construct(nums, nums.size());
    
    long long mxSum = 0;
    findMxSum(root, mxSum);

}