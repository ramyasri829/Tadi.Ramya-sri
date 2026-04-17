#include <stdio.h>
#include <stdlib.h>

// Structure of node
struct Node {
    int data;
    struct Node *next;
};

// Function to count nodes
int countNodes(struct Node* head) {
    int count = 0;
    struct Node* temp = head;

    while(temp != NULL) {
        count++;
        temp = temp->next;
    }

    return count;
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
    int n, i, value, total;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    // Create list
    for(i = 1; i <= n; i++) {
        printf("Enter value %d: ", i);
        scanf("%d", &value);
        head = insertAtEnd(head, value);
    }

    printf("\nLinked List: ");
    display(head);

    // Count nodes
    total = countNodes(head);

    printf("Total number of nodes: %d\n", total);

    return 0;
}
