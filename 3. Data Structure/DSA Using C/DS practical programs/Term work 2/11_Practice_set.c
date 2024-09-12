// Q11. WAP to convert an infix expression into postfix expression.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

struct Stack
{
    int top;
    unsigned capacity;
    char *array;
};

int isOperator(char ch)
{
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

int getPrecedence(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    else if (ch == '*' || ch == '/')
        return 2;
    else
        return 0;
}

int isEmpty(struct Stack *stack)
{
    return stack->top == -1;
}

void push(struct Stack *stack, char ch)
{
    stack->array[++stack->top] = ch;
}

char pop(struct Stack *stack)
{
    if (!isEmpty(stack))
        return stack->array[stack->top--];
    return '$';
}

char peek(struct Stack *stack)
{
    if (!isEmpty(stack))
        return stack->array[stack->top];
    return '$';
}

int isOperand(char ch)
{
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

void infixToPostfix(char *infix, char *postfix)
{
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
    stack->capacity = MAX_SIZE;
    stack->top = -1;
    stack->array = (char *)malloc(stack->capacity * sizeof(char));

    int i, j;
    char ch;

    for (i = 0, j = 0; infix[i] != '\0'; i++)
    {
        ch = infix[i];

        if (isOperand(ch))
        {
            postfix[j++] = ch;
        }
        else if (ch == '(')
        {
            push(stack, ch);
        }
        else if (ch == ')')
        {
            while (peek(stack) != '$' && peek(stack) != '(')
                postfix[j++] = pop(stack);
            if (peek(stack) == '(')
                pop(stack);
        }
        else if (isOperator(ch))
        {
            while (peek(stack) != '$' && getPrecedence(ch) <= getPrecedence(peek(stack)))
                postfix[j++] = pop(stack);
            push(stack, ch);
        }
    }

    while (peek(stack) != '$')
    {
        postfix[j++] = pop(stack);
    }

    postfix[j] = '\0';

    free(stack->array);
    free(stack);
}

int main()
{
    char infix[MAX_SIZE];
    char postfix[MAX_SIZE];

    printf("Enter an infix expression: ");
    fgets(infix, MAX_SIZE, stdin);

    infixToPostfix(infix, postfix);

    printf("Postfix expression: %s\n", postfix);

    return 0;
}
