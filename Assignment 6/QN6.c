#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void FirstAndLastElement(struct node *head){
    if(head == NULL){
        printf("List is empty\n");
        return;
    }

    struct node *ptr = head;

    printf("First element is %d\n", head->data);

    while(ptr->next != NULL){
        ptr = ptr->next;
    }

    printf("Last element is %d\n", ptr->data);
}

int main(){
    struct node *head,*second,*third;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    printf("Enter data for 1st node:\n");
    scanf("%d",&head->data);
    head->next = second;

    printf("Enter data for 2nd node:\n");
    scanf("%d",&second->data);
    second->next = third;

    printf("Enter data for 3rd node:\n");
    scanf("%d",&third->data);
    third->next = NULL;

    FirstAndLastElement(head);

    

    return 0;
}