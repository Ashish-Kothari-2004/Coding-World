// Q12. WAP to evaluate a postfix expression using stack.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_SIZE 100

struct Stack
{
    int top;
    int arr[MAX_SIZE];
};

struct Stack *createStack()
{
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
    stack->top = -1;
    return stack;
}

void push(struct Stack *stack, int item)
{
    if (stack->top == MAX_SIZE - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    stack->arr[++stack->top] = item;
}

int pop(struct Stack *stack)
{
    if (stack->top == -1)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack->arr[stack->top--];
}

int evaluatePostfix(char *postfix)
{
    struct Stack *stack = createStack();
    int i, operand1, operand2, result;
    char ch;

    for (i = 0; postfix[i] != '\0'; i++)
    {
        ch = postfix[i];
        if (isdigit(ch))
        {
            push(stack, ch - '0');
        }
        else
        {
            operand2 = pop(stack);
            operand1 = pop(stack);

            switch (ch)
            {
            case '+':
                result = operand1 + operand2;
                break;
            case '-':
                result = operand1 - operand2;
                break;
            case '*':
                result = operand1 * operand2;
                break;
            case '/':
                result = operand1 / operand2;
                break;
            case '%':
                result = operand1 % operand2;
                break;
            default:
                printf("Invalid operator\n");
                return -1;
            }
            push(stack, result);
        }
    }
    return pop(stack);
}

int main()
{
    char postfix[MAX_SIZE];
    printf("Enter a postfix expression: ");
    fgets(postfix, sizeof(postfix), stdin);
    int result = evaluatePostfix(postfix);
    printf("Result: %d\n", result);
    return 0;
}
