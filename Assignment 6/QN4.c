#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};

void displayLast(struct Node* head) {
    if(head == NULL) {
        printf("Linked list is empty.\n");
        return;
    }

    struct Node* temp = head;

   
    while(temp->next != NULL) {
        temp = temp->next;
    }

    printf("Last element is: %d\n", temp->data);
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


    displayLast(head);

    return 0;
}