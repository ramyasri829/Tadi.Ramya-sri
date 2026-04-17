#include <stdio.h>
#include <stdlib.h>

// Define the structure for a doubly linked list node
struct node {
    struct node *prev;
    int data;
    struct node *next;
};

// Global pointers to keep track of the list
struct node *head = NULL, *tail = NULL;

// Function to create the list and insert nodes at the end
void create() {
    int n, i;
    struct node *newnode;

    printf("Enter the number of nodes: ");
    if (scanf("%d", &n) != 1) return;

    for (i = 0; i < n; i++) {
        // Allocate memory for the new node
        newnode = (struct node *)malloc(sizeof(struct node));
        
        printf("Enter node %d data: ", i + 1);
        scanf("%d", &newnode->data);

        // Initialize pointers of the new node
        newnode->next = NULL;
        newnode->prev = NULL;

        if (head == NULL) {
            // If the list is empty, newnode becomes both head and tail
            head = tail = newnode;
        } else {
            // Link the current tail to the new node
            tail->next = newnode;
            // Link the new node back to the current tail
            newnode->prev = tail;
            // Move the tail pointer to the new node
            tail = newnode;
        }
    }
}

// Function to print the list from start to end
void display() {
    struct node *temp = head;
    printf("\nDoubly Linked List: ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    create();
    display();
    return 0;
}
