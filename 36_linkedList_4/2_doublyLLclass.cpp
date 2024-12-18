#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* next = NULL;
    Node* prev = NULL;

    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class DLL{    // user defined data structure
public:
    Node*head ;
    Node*tail ;
    int size;

    DLL(){
        head = tail =  NULL;
        size = 0;
    }

    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            tail->next = temp;
            temp->prev = tail;    // extra
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
            head->prev = temp;   // extra line
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
            t->prev = temp;   // extra     
            t->next->prev = t;       // extra
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
    DLL list;
    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);

    list.display();
    list.insertAtTail(40);
    list.display();

}