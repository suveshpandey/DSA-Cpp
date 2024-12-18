#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = next;
    }
};
void display(Node* head){ // 10->20->30->40->50->NULL
    while(head != NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}
int size(Node* head){
    Node* temp = head;
    int n = 0;
    while(temp != NULL){
        n++;
        temp = temp->next;
    }
    return n;
    cout<<endl;
}

void deleteNode(Node* head, Node* target){
    Node* temp = head;
    while(temp->next != target){
        temp = temp->next;
    }
    temp->next = temp->next->next;
    cout<<endl;
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = NULL;

    display(a);
    cout<<size(a);

    deleteNode(a, d);
    display(a);
    
}