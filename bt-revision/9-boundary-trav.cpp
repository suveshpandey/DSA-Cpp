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

void leftB(Node* root, vector<int> &result){
    if(root->left == nullptr && root->right == nullptr) return;
    result.push_back(root->val);
    if(root->left == nullptr) leftB(root->right, result);
    else leftB(root->left, result);
}
void rightB(Node* root, vector<int> &result){
    if(root->left == nullptr && root->right == nullptr) return;
    if(root->right == nullptr) rightB(root->left, result);
    else rightB(root->right, result);
    result.push_back(root->val);
}
void leafNodes(Node* root, vector<int> &result){
    if(root == nullptr) return;
    if(root->left == nullptr && root->right == nullptr) result.push_back(root->val);

    leafNodes(root->left, result);
    leafNodes(root->right, result);
}
int main(){
    vector<int> nums = {1, 2, 3, 4, 5, INT_MIN, 6, INT_MIN, INT_MIN, 7, 8, 9};
    Node* root = construct(nums, nums.size());

    vector<int> result;

    leftB(root, result);
    leafNodes(root, result);
    rightB(root, result);

    for(int i = 0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }

}