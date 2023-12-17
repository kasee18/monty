#include "monty.h"
#include <string.h>
/**
*main - entry
*Return: int
*/
int main(void)
{
	int stack[STACK_SIZE];
	int top = -1;

	FILE *file = fopen("your_input_file.txt", "r");

	if (file == NULL)
	{
	perror("Error opening file");
	exit(EXIT_FAILURE);
	}
	char opcode[100];
	int value, line_number = 1;

	while (fscanf(file, "%s", opcode) != EOF)
	{
	if (strcmp(opcode, "push") == 0)
	}
	{
	if (fscanf(file, "%d", &value) != 1)
	}
	{
	fprintf(stderr, "L%d: usage: push integer\n", line_number);
	exit(EXIT_FAILURE);
	}
	push(value);
	{
	else if (strcmp(opcode, "pall") == 0)
	}
	{
	pall();
	}
	else
	{
	fprintf(stderr, "L%d: Unknown opcode: %s\n", line_number, opcode);
	exit(EXIT_FAILURE);
	}
	line_number++;
	fclose(file);
	return (0);
}
