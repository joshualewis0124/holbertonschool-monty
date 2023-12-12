#include "monty.h"

/**
 * push - adds a node at stack
 * @stack: nodes
 * @line_number: file line number
 */

void push(stack_t **stack, unsigned int line_number)
{
	char **split_buff;
	int num;
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (!new)
	{
		free(new);
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
