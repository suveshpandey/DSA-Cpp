#include<iostream>
using namespace std;
class Node{  // user defined data type
    public:
    int val;
    Node* next;                                 
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class LinkedList{    // user defined data structure
public:
    Node*head ;
    Node*tail ;
    int size;

    LinkedList(){
        head = tail =  NULL;
        size = 0;
    }

    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAtIdx(int idx, int val){
        if(idx<0 || idx>size) cout<<"invalid index"<<endl;
        else if(idx == 0) insertAtHead(val);
        else if(idx == size) insertAtTail(val);
        else{
            Node* t =  new Node(val);
            Node*temp = head;
            for(int i= 1;i<=idx;i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }
    void deleteAtHead(){
        if(size == 0){
            cout<<"list is empty";
            return;
        }
        head = head->next;
        size--;
    }

    void deleteAtTail(){
        if(size == 0){
            cout<<"list is empty";
            return;
        }
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }

    void deleteAtIndex(int idx){
        if(size == 0){
            cout<<"list is empty";
            return;
        }
        else if(idx<0 || idx>=size){
            cout<<"invalid index";
            return;
        }
        else if(idx == 0) return deleteAtHead();
        else if(idx == size-1) return deleteAtTail();
        else{
            Node* temp= head;
            for(int i = 1;i<=idx;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
    
};
int main(){
    LinkedList ll; // = { }
    cout<<ll.size<<endl;
    ll.insertAtTail(10); // = {10->NULL}
    ll.display();
    ll.insertAtTail(20);  // = {10->20->NULL}
    ll.display();
    ll.insertAtTail(30);  // = {10->20->NULL}
    ll.display();

    cout<<ll.size<<endl;

    ll.insertAtHead(50); // {50->10->20->30->4->NULL}
    ll.display();

    ll.insertAtIdx(2, 80); // {50, 10, 20, 80, 30, }
    ll.display();
    //cout<<ll.getAtIdx();
    ll.deleteAtHead();
    ll.display();

    ll.deleteAtTail();
    ll.display();

    ll.deleteAtIndex(3);
    ll.display();
}