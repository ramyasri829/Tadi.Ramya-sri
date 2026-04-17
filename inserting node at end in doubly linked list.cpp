#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

struct node *head = NULL, *tail = NULL;

// Function to create the initial doubly linked list
void create() {
    int n, i;
    struct node *newnode;
    printf("Enter number of nodes to create: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data for node %d: ", i + 1);
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

// Function to insert a node at a specific position
void insertAtPosition() {
    int pos, i = 1;
    struct node *newnode, *temp;
    
    printf("\nEnter the position to insert: ");
    scanf("%d", &pos);

    // Basic validation for position
    if (pos < 1) {
        printf("Invalid position!\n");
        return;
    }

    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data for new node: ");
    scanf("%d", &newnode->data);

    if (pos == 1) {
        // Insertion at the beginning
        newnode->prev = NULL;
        newnode->next = head;
        if (head != NULL) head->prev = newnode;
        head = newnode;
    } else {
        temp = head;
        // Traverse to the node before the desired position
        while (i < pos - 1 && temp != NULL) {
            temp = temp->next;
            i++;
        }

        if (temp == NULL) {
            printf("Position out of range!\n");
            free(newnode);
        } else {
            // Adjust pointers for insertion in the middle or at the end
            newnode->next = temp->next;
            newnode->prev = temp;
            if (temp->next != NULL) {
                temp->next->prev = newnode;
            }
            temp->next = newnode;
        }
    }
}

// Function to display the list
void display() {
    struct node *temp = head;
    printf("\nCurrent List: ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    create();
    display();
    insertAtPosition();
    display();
    return 0;
}
