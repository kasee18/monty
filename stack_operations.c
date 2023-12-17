#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

{
	int stack[STACK_SIZE];
	int top;
} Stack;
/**
*initStack - entry point
*@stack: pointer
*Return: void
*/
void initStack(Stack *stack)
{
	stack->top = -1;
}
/**
*push - program entry point
*@stack: pointer to stack
*@value: integer
*@line_number: line carrying the number
*Return: void
*/
void push(Stack *stack, int value, int line_number)
{
	if (stack->top == STACK_SIZE - 1)

	{
	fprintf(stderr, "L%d: Stack overflow\n", line_number);
	exit(EXIT_FAILURE);
	}
	stack->stack[++stack->top] = value;
}
/**
*main - entry point
*Return: integer
*/
int main(void)
{
	Stack stack;

	initStack(&stack);
	push(&stack, 10, 1);
	push(&stack, 20, 2);
	push(&stack, 30, 3);
	pall(&stack);
	return (0);
}
