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
class Deque
{    // user defined data structure
public:
    Node*head ;
    Node*tail ;
    int s;

    Deque(){
        head = tail =  NULL;
        s = 0;
    }

    void pushBack(int val){
        Node* temp = new Node(val);
        if(s == 0) head = tail = temp;
        else{
            tail->next = temp;
            temp->prev = tail;    // extra
            tail = temp;
        }
        s++;
    }
    int front(){
        if(s == 0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return head->val;
    }

    int back(){
        if(s == 0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return tail->val;
    }

    int size(){
        return s;
    }
    bool empty(){
        if(s==0){
            return true;
        }
        else return false;
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    void pushFront(int val){
        Node* temp = new Node(val);
        if(s == 0) head = tail = temp;
        else{
            temp->next = head;
            head->prev = temp;   // extra line
            head = temp;
        }
        s++;
    }
    
    void popFront(){
        if(s == 0){
            cout<<"list is empty";
            return;
        }
        head = head->next;
        s--;
    }

    void popBack(){
        if(s == 0){
            cout<<"list is empty";
            return;
        }
        else if(s == 1){
            popFront();
            return;
        }
        Node* temp= tail->prev;
        temp->next = NULL;
        tail = temp;
        s--;
    }

    
};

int main(){

    Deque dq;
    dq.pushBack(10);
    dq.pushBack(20);
    dq.pushBack(30);
    dq.pushBack(40);

    dq.display();
    dq.popBack();
    dq.display();
    dq.popFront();
    dq.display();
    dq.pushFront(50);
    dq.display();
    cout<<dq.front()<<endl<<dq.back()<<endl;
}