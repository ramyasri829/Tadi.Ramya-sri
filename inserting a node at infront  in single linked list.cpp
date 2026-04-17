#include <stdio.h>
#include <stdlib.h>

// Structure of node
struct Node {
    int data;
    struct Node *next;
};

// Insert at a specific position
struct Node* insertAtPosition(struct Node* head, int value, int pos) {
    struct Node *newNode, *temp;
    int i;

    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    // Insert at beginning
    if(pos == 1) {
        newNode->next = head;
        head = newNode;
        return head;
    }

    temp = head;

    // Traverse to (pos-1) node
    for(i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if(temp == NULL) {
        printf("Invalid position!\n");
        return head;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

// Display list
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
    struct Node* temp;
    int n, i, value, pos;

    printf("Enter number of initial nodes: ");
    scanf("%d", &n);

    // Create initial list
    for(i = 1; i <= n; i++) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter data for node %d: ", i);
        scanf("%d", &newNode->data);
        newNode->next = NULL;

        if(head == NULL) {
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    printf("\nOriginal List: ");
    display(head);

    // Insert at position
    printf("\nEnter position to insert: ");
    scanf("%d", &pos);

    printf("Enter value to insert: ");
    scanf("%d", &value);

    head = insertAtPosition(head, value, pos);

    printf("\nUpdated List: ");
    display(head);

    return 0;
}
