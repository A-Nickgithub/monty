#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * add - Adds the top two elements of the stack.
 * @stack: A pointer to the top of the stack.
 * @line_number: The line number in the file
 * where the add instruction appears.
 */
void(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n += (*stack)->n;
	pop(stack, line_number);
}
