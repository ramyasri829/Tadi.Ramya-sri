#include <stdio.h>
#include <stdlib.h>

// Structure of node
struct Node {
    int data;
    struct Node *next;
};

// Function to reverse the linked list
struct Node* reverseList(struct Node* head) {
    struct Node *prev = NULL;
    struct Node *current = head;
    struct Node *next = NULL;

    while(current != NULL) {
        next = current->next;   // store next node
        current->next = prev;   // reverse link
        prev = current;         // move prev forward
        current = next;         // move current forward
    }

    head = prev; // new head
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

// Helper function to insert at end
struct Node* insertAtEnd(struct Node* head, int value) {
    struct Node *newNode, *temp;

    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL)
        return newNode;

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

    // Reverse list
    head = reverseList(head);

    printf("Reversed List: ");
    display(head);

    return 0;
}
