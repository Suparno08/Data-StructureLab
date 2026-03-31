#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};


struct Node* createList(int n) {
    struct Node *head = NULL, *temp = NULL, *newNode = NULL;

    for(int i = 0; i < n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));

        printf("Enter data for node %d: ", i + 1);
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

    return head;
}


void displayList(struct Node* head) {
    struct Node* temp = head;

    printf("Linked List: ");
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    int n;
    struct Node* head;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    head = createList(n);   

    displayList(head);      

    return 0;
}