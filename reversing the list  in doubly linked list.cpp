#include <stdio.h>
#include <stdlib.h>

// Structure for a doubly linked list node
struct node {
    struct node *prev;
    int data;
    struct node *next;
};

// Global pointers
struct node *head = NULL, *tail = NULL;

// Function to create the list
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

// Function to reverse the doubly linked list
void reverse() {
    struct node *current = head;
    struct node *temp = NULL;

    if (head == NULL) {
        printf("\nList is empty.\n");
        return;
    }

    // Traverse the list and swap next and prev for each node
    while (current != NULL) {
        // Swap next and prev pointers
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;

        // Move to the next node (which is now stored in current->prev)
        current = current->prev;
    }

    // After the loop, swap head and tail
    temp = head;
    head = tail;
    tail = temp;

    printf("\nList has been reversed successfully.\n");
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
    printf("\nBefore reversing:\n");
    display();

    reverse();

    printf("\nAfter reversing:\n");
    display();

    return 0;
}
