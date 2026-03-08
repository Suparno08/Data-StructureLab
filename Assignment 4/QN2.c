/*
Given an expression containing {, [], and (), determine whether the
parentheses are balanced.
*/
/*
Coded by: $up@rn0
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack
{
    int size;
    int top;
    char *str;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *variable,char val){
    if (isFull(variable))
    {
        printf("Stack overflow\n");
    }
    else
    {
        variable->top++;
        variable->str[variable->top]= val;
    }
}

char pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow\n");
        return '\0';
    }
    else
    {
        char val = ptr->str[ptr->top];
        ptr->top--;
        return val;
    }
}

int match(char a, char b)
{
    if(a=='(' && b==')')
        return 1;
    if(a=='{' && b=='}')
        return 1;
    if(a=='[' && b==']')
        return 1;

    return 0;
}

int isBalanced(struct stack *stack, char *brackets)
{
    for(int i = 0; brackets[i] != '\0'; i++)
    {
        if(brackets[i] == '(' || brackets[i] == '{' || brackets[i] == '[')
        {
            push(stack, brackets[i]);
        }
        else if(brackets[i] == ')' || brackets[i] == '}' || brackets[i] == ']')
        {
            if(isEmpty(stack))
                return 0;

            char popped = pop(stack);

            if(!match(popped, brackets[i]))
                return 0;
        }
    }

    return isEmpty(stack);
}

int main()
{
    char brackets[100];

    printf("Enter brackets:\n");
    scanf("%s", brackets);

    struct stack stack;
    stack.size = strlen(brackets);
    stack.top = -1;
    stack.str = (char*)malloc(stack.size * sizeof(char));

    if(isBalanced(&stack, brackets))
        printf("Balanced\n");
    else
        printf("Not Balanced\n");

    free(stack.str);

    return 0;
}