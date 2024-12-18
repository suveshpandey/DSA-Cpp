#include<iostream>
#include<queue>
#include<climits>
using namespace std;
class Node{      // this is  a tree node
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
int levels(Node* root){
    if(root == NULL) return 0;
    return 1+ max(levels(root->left),levels(root->right));
}
void nthLevel(Node* root, int curr,int level){
    if(root == NULL) return;  // base case
    if(curr == level) cout<<root->val<<" "; //root
    nthLevel(root->left,curr+1,level);        // left
    nthLevel(root->right,curr +1,level);        // right
}

void levelOrder(Node* root, int curr, int level){
    int n = levels(root);
    for(int i = 1;i<=n;i++){
        nthLevel(root,1,i);
        //nthLevelRev(root,1,i);

        cout<<endl;
    }
}
void nthLevelRev(Node* root, int curr,int level){
    if(root == NULL) return;  // base case
    if(curr == level) cout<<root->val<<" "; //root
    nthLevelRev(root->right,curr +1,level);        // right
    nthLevelRev(root->left,curr+1,level);        // left
}

void levelOrderQueue(Node* root){
    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        Node* temp= q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left != NULL) q.push(temp->left);
        if(temp->right != NULL) q.push(temp->right);
    }
    cout<<endl;

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
    
    nthLevel(a,1,3);
    cout<<endl<<endl;
    levelOrder(a,1,3);
    cout<<endl;
    levelOrderQueue(a);
    
}
