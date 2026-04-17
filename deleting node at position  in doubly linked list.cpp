#include <stdio.h>
#include <stdlib.h>

// Structure for a doubly linked list node
struct node {
    struct node *prev;
    int data;
    struct node *next;
};

// Global pointers for the list
struct node *head = NULL, *tail = NULL;

// Function to create the initial list
void create() {
    int n, i;
    struct node *newnode;

    printf("Enter number of nodes: ");
    if (scanf("%d", &n) != 1) return;

    for (i = 0; i < n; i++) {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter node %d data: ", i + 1);
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        newnode->prev = NULL;

        if (head == NULL) {
            head = tail = newnode;
        } else {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }
}

// Function to delete the first node (front)
void deleteAtFront() {
    struct node *temp;

    if (head == NULL) {
        printf("\nList is empty. Nothing to delete.\n");
        return;
    }

    temp = head; // Point to the node we want to remove

    if (head == tail) {
        // Case: Only one node in the list
        head = tail = NULL;
    } else {
        // Case: Multiple nodes in the list
        head = head->next; // Move head to the next node
        head->prev = NULL; // New head's previous must be NULL
    }

    printf("\nDeleted node from front with data: %d\n", temp->data);
    free(temp); // Free the memory of the old head
}

// Function to print the list
void display() {
    struct node *temp = head;
    printf("\nCurrent List: ");
    if (temp == NULL) {
        printf("EMPTY");
    }
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    create();
    display();
    
    deleteAtFront();
    display();
    
    return 0;
}
