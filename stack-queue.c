#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * set_mode - Sets the mode of the data to either stack or queue.
 * @mode: The mode to set (STACK or QUEUE).
 */
void set_mode(stack_mode_t *mode)
{
	*mode = (*mode == STACK) ? QUEUE : STACK;
}

/**
 * add - Adds the top two elements of the stack.
 * @stack: A pointer to the top of the stack.
 * @line_number: The line number in the file
 * where the add instruction appears.
 */
void add (stack_t **stack, unsigned int line_number)
{
	if (*stack != NULL && (*stack)->next != NULL)
	{
		(*stack)->next->n += (*stack)->n;
		pop(stack, line_number);
	}
	else
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}
