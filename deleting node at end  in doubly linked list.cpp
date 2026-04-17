#include <stdio.h>
#include <stdlib.h>

// Structure for a doubly linked list node
struct node {
    struct node *prev;
    int data;
    struct node *next;
};

// Global pointers for list management
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

// Function to delete a node at a specific position
void deleteAtPosition() {
    struct node *temp;
    int pos, i = 1;

    if (head == NULL) {
        printf("\nList is empty!\n");
        return;
    }

    printf("\nEnter the position to delete: ");
    scanf("%d", &pos);

    temp = head;

    // Case 1: Delete the first node
    if (pos == 1) {
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        } else {
            tail = NULL; // List became empty
        }
        printf("Node at position 1 deleted.\n");
        free(temp);
    } 
    else {
        // Traverse to find the node at the target position
        while (i < pos && temp != NULL) {
            temp = temp->next;
            i++;
        }

        if (temp == NULL) {
            printf("Invalid position! Out of range.\n");
        } else {
            // Case 2: Delete the last node (tail)
            if (temp == tail) {
                tail = tail->prev;
                tail->next = NULL;
            } 
            // Case 3: Delete a middle node
            else {
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
            }
            
            printf("Node at position %d deleted.\n", pos);
            free(temp);
        }
    }
}

// Function to print the list
void display() {
    struct node *temp = head;
    printf("\nCurrent List: ");
    if (temp == NULL) {
        printf("EMPTY\n");
        return;
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
    
    deleteAtPosition();
    display();
    
    return 0;
}
