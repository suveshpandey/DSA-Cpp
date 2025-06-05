#include<stdio.h>
#include<stdlib.h>

//define the tructure of node
struct Node {
    int data;
    struct Node* next;
};

//creation of a node
struct Node* createNode (int val) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}

int main() {
    struct Node* a = createNode(10);
    struct Node* b = createNode(20);
    struct Node* c = createNode(30);
    struct Node* d = createNode(40);

    a->next = b;
    b->next = c;
    c->next = d;

    struct Node* temp = a;
    while(temp != NULL) {
        printf("%d, ", temp->data);
        temp = temp->next;
    }
}