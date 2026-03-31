#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};

// Function to traverse and display
void traverse(struct Node* head) {
    struct Node* temp = head;

    if(head == NULL) {
        printf("Linked list is empty.\n");
        return;
    }

    printf("Elements of linked list: ");
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
   
    struct Node *head = NULL, *second = NULL, *third = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    
    traverse(head);

    return 0;
}