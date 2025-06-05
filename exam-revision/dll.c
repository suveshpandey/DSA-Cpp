#include<stdio.h>
#include<stdlib.h>

struct Node {
    int val;
    struct Node* prev;
    struct Node* next;
};

struct Node* createNode(int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->val = val;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Changed to return the new head pointer
struct Node* addAtPos(struct Node* head, int index, int val) {
    struct Node* newNode = createNode(val);
    
    // Insert at head (position 0)
    if(index == 0) {
        newNode->next = head;
        if(head != NULL) {
            head->prev = newNode;
        }
        return newNode;  // Return new head
    }
    
    struct Node* temp = head;
    int currentPos = 0;
    
    // Traverse to the node before the insertion point
    while(temp != NULL && currentPos < index - 1) {
        temp = temp->next;
        currentPos++;
    }
    
    if(temp == NULL) {
        printf("Invalid position!\n");
        free(newNode);  // Free the unused node
        return head;
    }
    
    // Insert the new node
    newNode->next = temp->next;

    newNode->prev = temp;
    
    if(temp->next != NULL) {
        temp->next->prev = newNode;
    }
    temp->next = newNode;
    
    return head;
}

void freeList(struct Node* head) {
    struct Node* temp;
    while(head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    struct Node* a = createNode(10);
    struct Node* b = createNode(20);
    struct Node* c = createNode(30);
    struct Node* d = createNode(40);

    // Link nodes
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    c->next = d;
    d->prev = c;

    // Print initial list
    printf("Initial list: ");
    struct Node* temp = a;
    while(temp != NULL) {
        printf("%d ", temp->val);
        temp = temp->next;
    }
    printf("\n");

    // Get user input
    int idx, value;
    printf("Enter the index to add node (0-4): ");
    scanf("%d", &idx);
    printf("Enter value: ");
    scanf("%d", &value);

    // Update the head pointer in case of insertion at position 0
    a = addAtPos(a, idx, value);

    // Print updated list
    printf("Updated list: ");
    temp = a;
    while(temp != NULL) {
        printf("%d ", temp->val);
        temp = temp->next;
    }
    printf("\n");

    // Free memory
    freeList(a);
    
    return 0;
}