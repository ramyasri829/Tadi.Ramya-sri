#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct node {
    struct node *prev;
    int data;
    struct node *next;
};

// Global pointers
struct node *head = NULL, *tail = NULL;

// Function to create the initial list
void create() {
    int n, i;
    struct node *newnode;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

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

// Function to delete a node from the front
void deleteFromFront() {
    struct node *temp;

    if (head == NULL) {
        printf("\nList is empty, nothing to delete.\n");
    } else {
        temp = head;           // Store the current head in temp
        head = head->next;     // Move head to the next node

        if (head != NULL) {
            head->prev = NULL; // Disconnect the old node from the new head
        } else {
            tail = NULL;       // If list becomes empty, set tail to NULL
        }

        printf("\nDeleted node with data: %d\n", temp->data);
        free(temp);            // Free the memory of the old head
    }
}

// Function to display the list
void display() {
    struct node *temp = head;
    printf("Current List: ");
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
    
    deleteFromFront();
    display();
    
    return 0;
}
