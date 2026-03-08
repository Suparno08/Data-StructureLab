/*Implement a stack using array and functions:
 void push(int x)
 int pop()
 int peek()
 int isEmpty()
 isFull()
*/
/*
Coded by: $up@rn0
 */
#include <stdio.h>
#include <stdlib.h>
struct stack 
{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack *variable)
{
    if (variable->top == -1)
    {
        return 1;
    }
    return 0;
}
int isFull(struct stack *variable){
    if (variable->top == variable->size-1)
    {
        return 1;
    }
    
    return 0;

}
void push(struct stack *variable,int val){
    if (isFull(variable))
    {
        printf("Stack overflow,Can not push %d in the stack\n",val);
    }
    else
    {
        variable->top++;
        variable->arr[variable->top]= val;
    }
}
    
int pop(struct stack *variable){
    if (isEmpty(variable))
    {
        printf("Stack Underflow,Can not pop\n");
        return -1;
    }
    else
    {

        int val = variable->arr[variable->top];
        variable->top--;
        return val;
    }
    
    
}
int peek(struct stack *variable, int i){
   
    if (variable->top-i+1<0)
    {
        printf("The position is invalid XD\n");
        return -1;
    }
    return variable->arr[variable->top-i+1];
    
}

int main()
{
    struct stack sp ;
    printf("Enter size of array:\n");
    scanf("%d",&sp.size);
    sp.top = -1;
    sp.arr = (int *)malloc(sp.size * sizeof(int));
    printf("Stack has been created successfully \n");
    printf("Before push, \nEmpty:%d\n",isEmpty(&sp));
    printf("Before push, \nFull:%d\n",isFull(&sp));
    int n,val;
    printf("How many values you want to insert:\n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&val);
        push(&sp,val); 
    }
    
    
    printf("After push, \nempty:%d\n",isEmpty(&sp));
    printf("After push, \nfull:%d\n",isFull(&sp));
    printf("Popped %d from the stack\n",pop(&sp));
    for (int i = 0; i <= sp.top; i++)
    {
        printf("%d ",sp.arr[i]);
       
    }
    int index;
    printf("Enter index number to check value:\n");
    scanf("%d",&index);
    printf("%d \n",peek(&sp,index));

    


    return 0;
}