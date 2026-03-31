#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};


void displayFirst(struct Node* head) {
    if(head == NULL) {
        printf("Linked list is empty.\n");
    } else {
        printf("First element is: %d\n", head->data);
    }
}

int main() {
   
    struct Node *head = NULL, *second = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = NULL;

  
    displayFirst(head);

    return 0;
}