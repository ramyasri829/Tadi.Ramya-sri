#include <stdio.h>
#include <stdlib.h>

// Structure of node
struct Node {
    int data;
    struct Node *next;
};

// Function to insert at beginning
struct Node* insertAtBeginning(struct Node* head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = head;  // point to old head

    head = newNode;        // update head
    return head;
}

// Function to traverse (display)
void display(struct Node* head) {
    struct Node* temp = head;

    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int n, value, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    // Insert nodes at beginning
    for(i = 1; i <= n; i++) {
        printf("Enter value %d: ", i);
        scanf("%d", &value);
        head = insertAtBeginning(head, value);
    }

    // Display list
    printf("\nLinked List: ");
    display(head);

    return 0;
}
