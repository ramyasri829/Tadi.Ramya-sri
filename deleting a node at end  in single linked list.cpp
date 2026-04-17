#include <stdio.h>
#include <stdlib.h>

// Structure of node
struct Node {
    int data;
    struct Node *next;
};

// Function to delete node at beginning
struct Node* deleteAtBeginning(struct Node* head) {
    struct Node *temp;

    // If list is empty
    if(head == NULL) {
        printf("List is empty!\n");
        return head;
    }

    temp = head;        // store current head
    head = head->next;  // move head to next node
    free(temp);         // delete old head

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

// Helper: insert at end (to create list)
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

    // Delete first node
    head = deleteAtBeginning(head);

    printf("After deleting first node: ");
    display(head);

    return 0;
}
