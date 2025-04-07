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

void findLeftAndRight(Node* root, int pos, int &l, int &r){
    if(root == nullptr) return;
    
    l = min(l, pos);
    r = max(r, pos);

    findLeftAndRight(root->left, pos-1, l, r);
    findLeftAndRight(root->right, pos+1, l, r);
}

vector<int> verticalTraversal(Node* root) {
    int l = 0, r = 0;
    findLeftAndRight(root, 0, l, r);

    vector<vector<int>> negatives(abs(l)+1);
    vector<vector<int>> positives(r+1);

    queue<Node*> nodes;
    queue<int> verticalPos;

    nodes.push(root);
    verticalPos.push(0);

    while(!nodes.empty()){
        Node* node = nodes.front();
        nodes.pop();

        int pos = verticalPos.front();
        verticalPos.pop();

        if(pos >= 0){
            positives[pos].push_back(node->val);
        }
        else{
            negatives[(abs(pos))].push_back(node->val);
        }

        if(node->left){
            nodes.push(node->left);
            verticalPos.push(pos-1);
        }
        if(node->right){
            nodes.push(node->right);
            verticalPos.push(pos+1);
        }
    }

    vector<int> result;
    for(int i = negatives.size()-1; i>0; i--){
        result.push_back(negatives[i][0]);
    }
    for(int i = 0; i<positives.size(); i++){
        result.push_back(positives[i][0]);
    }

    return result;
}

int main(){
    vector<int> nums = {1, 2, 3, 4, 5, INT_MIN, 6, INT_MIN, INT_MIN, 7, 8, 9};
    Node* root = construct(nums, nums.size());

    vector<int> result = verticalTraversal(root);
    
    for(int ele : result){
        cout<<ele<<", ";
    }
}