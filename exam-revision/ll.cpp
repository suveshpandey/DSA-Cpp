#include<iostream>
using namespace std;

class Node {
public:

    int data;
    Node* prev;
    Node* next;

    Node(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

int main() {
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    head->prev = NULL;
    head->next = second;

    second->prev = head;
    second->next = third;

    third->prev = second;
    third->next = fourth;

    fourth->prev = third;
    fourth->next = fifth;

    fifth->prev = fourth;
    fifth->next = NULL;

    Node* temp = head;
    while(temp != NULL) {
        int previousEl = temp->prev == NULL ? -1 : temp->prev->data;
        int nextEl = temp->next == NULL ? -1 : temp->next->data;
        int ele = temp->data;

        cout<<previousEl<<" | "<<ele<<" | "<<nextEl<<endl;
        temp = temp->next;
    }
}