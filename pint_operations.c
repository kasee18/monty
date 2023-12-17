#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100
typedef struct
{
	int stack[STACK_SIZE];
	int top;
} Stack;
void initStack(Stack *stack)
{
	stack->top = -1;
}
void push(Stack *stack, int value, int line_number)
{
	if (stack->top == STACK_SIZE - 1)
	{
	fprintf(stderr, "L%d: Stack overflow\n", line_number);
	exit(EXIT_FAILURE);
	}
	stack->stack[++stack->top]; = value;
}
void pal(Stack *stack)
{
	int i;
	for (i = stack->top; i >= 0; i--)
	{
	printf("%d\n", stack->stack[i]);
	}
}
void pint(Stack *stack, int line_number)
{
	if (stack->top == -1)
	
	{
	fprintf(stderr, "L%d: can't pint, empty\n",line_number);
	exit(EXIT_FAILURE);
	}
	printf("%d\n", stack->stack[stack->top]);
}
int main (void)
{
	Stack stack;
	initStack(&stack);

	push(&stack, 10, 1);
	push(&stack, 20, 2);
	push(&stack, 30, 3);

	pint(&stack, 4);
	return (0);
}
