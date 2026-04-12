#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

int NodesType(){
    struct node * ptr;
    ptr = head;
    int count1 =0,count2=0; 

    while (ptr!=NULL)
    {
        if(ptr->data%2==0){
            count1++;
        }
        else{
            count2++;
        }
        ptr = ptr->next;   
    }

    printf("Even number %d and odd number %d",count1,count2);
    return 0;
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

    NodesType();  

   

  

    return 0;
}