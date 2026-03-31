#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void reverseDisplay(struct node *head){
    if(head == NULL){
        return;
    }
    reverseDisplay(head->next);
    printf("%d ", head->data);
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

    printf("Reverse Display:\n");
    reverseDisplay(head);

    return 0;
}