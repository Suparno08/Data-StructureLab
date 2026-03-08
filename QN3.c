/*Given a string S, reverse it using a stack. Hint: Place a string "world"
stack and the reverse string will be print "dlrow"
*/
/*
Coded by: $up@rn0
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void push(struct stack *variable, char val)
{
    if (isFull(variable))
    {
        printf("Stack overflow\n");
    }
    else
    {
        variable->top++;
        variable->str[variable->top] = val;
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

int main()
{
    char S[100];

    printf("Enter a string:\n");
    scanf("%s", S);

    struct stack s;
    s.size = strlen(S);
    s.top = -1;
    s.str = (char *)malloc(s.size * sizeof(char));

    for (int i = 0; S[i] != '\0'; i++)
    {
        push(&s, S[i]);
    }

    for (int i = 0; i < s.size; i++)
    {
        S[i] = pop(&s);
    }

    printf("Reversed string: %s\n", S);

    free(s.str);

    return 0;
}