#include <stdio.h>
#include <stdlib.h>

// Structure of node
struct Node {
    int data;
    struct Node *next;
};

// Function to delete node at end
struct Node* deleteAtEnd(struct Node* head) {
    struct Node *temp, *prev;

    // If list is empty
    if(head == NULL) {
        printf("List is empty!\n");
        return head;
    }

    // If only one node
    if(head->next == NULL) {
        free(head);
        return NULL;
    }

    temp = head;

    // Traverse to last node
    while(temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    prev->next = NULL; // remove last node
    free(temp);        // free memory

    return head;
}

// Function to display list
void display(struct Node* head) {
    struct Node* temp = head;
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Helper to insert at end (for initial creation)
struct Node* insertAtEnd(struct Node* head, int value) {
    struct Node *newNode, *temp;

    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL) return newNode;

    temp = head;
    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

int main() {
    struct Node* head = NULL;
    int n, i, value;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    // Create list
    for(i = 1; i <= n; i++) {
        printf("Enter value %d: ", i);
        scanf("%d", &value);
        head = insertAtEnd(head, value);
    }

    printf("\nOriginal List: ");
    display(head);

    // Delete last node
    head = deleteAtEnd(head);

    printf("After deleting last node: ");
    display(head);

    return 0;
}
