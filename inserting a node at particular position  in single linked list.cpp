#include <stdio.h>
#include <stdlib.h>

// Structure of node
struct Node {
    int data;
    struct Node *next;
};

// Function to insert at end
struct Node* insertAtEnd(struct Node* head, int value) {
    struct Node *newNode, *temp;

    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    // If list is empty
    if(head == NULL) {
        head = newNode;
        return head;
    }

    // Traverse to last node
    temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }

    // Link new node at end
    temp->next = newNode;

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

int main() {
    struct Node* head = NULL;
    int n, i, value;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    // Insert nodes at end
    for(i = 1; i <= n; i++) {
        printf("Enter value %d: ", i);
        scanf("%d", &value);
        head = insertAtEnd(head, value);
    }

    // Display list
    printf("\nLinked List: ");
    display(head);

    return 0;
}
