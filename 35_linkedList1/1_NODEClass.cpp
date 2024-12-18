#include<iostream>
using namespace std;
class Node{  // linked list node
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
int main(){
    // 10 20 30 40
    /*Node a;
    a.val = 10;

    Node b;
    b.val = 20;

    Node c;
    c.val = 30;

    Node d;
    d.val = 40;*/

    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    // forming linked list
    a.next = &b;
    b.next = &c;
    c.next = &d;
    //d.next = NULL;
    cout<<a.val<<endl;
    //cout<<a.next<<endl;
    a.next -> val = 60;
    cout<<b.val<<endl;  // same
    cout<<(a.next)-> val<<endl;//same

    //cout<<(b.next)->val<<endl;  // value of c
    //cout<<(((a.next)->next)->next)->val; // d li value

    Node temp = a;
    while(1){
        cout<<temp.val<<" ";
        if(temp.next == NULL) break;
        temp = *(temp.next);
    }

}