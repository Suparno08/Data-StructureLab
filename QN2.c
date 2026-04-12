#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertAtEnd(int data){
    struct node *temp,*ptr;
    temp = malloc(sizeof(struct node));

    temp->data = data;
    ptr = head;

    if (head == NULL)
    {
       return;
    }
    else
    {
        while (ptr->next!=NULL)
        {
            ptr = ptr->next;
        }
        ptr->next=temp;
        temp->next = NULL;
        
    }
}

int main(){
    struct node *n1,*n2,*n3,*ptr;

    n1 = malloc(sizeof(struct node));
    n2 = malloc(sizeof(struct node));
    n3 = malloc(sizeof(struct node));

    printf("Enter data for 1st node: ");
    scanf("%d",&n1->data);
    n1->next = n2;

    printf("Enter data for 2nd node: ");
    scanf("%d",&n2->data);
    n2->next = n3;

    printf("Enter data for 3rd node: ");
    scanf("%d",&n3->data);
    n3->next = NULL;

    head = n1;   

    insertAtEnd(50);

    ptr = head; 

    while (ptr != NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }

    return 0;
}