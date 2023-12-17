#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
/**
*push - adss a node on stack
*Rerurn: void
*@value: argument
*/
void push(int value)
{
	if (top == STACK_SIZE - 1)
	{
	fprintf(stderr, "Stack overflow\n");
	exit(EXIT_FAILURE);
	}
	top++;
	stack[top] = value;
}
/**
*pall - entry point
*Return: void
*/

void pall(void)
{
	int i;

	for (i = top; i >= 0; 1--)
	{
		printf("%d\n", stack[1]);
	}
}
