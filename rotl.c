#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * rotl - Rotates the stack to the top.
 * @stack: A pointer to the top of the stack.
 * @line_number: The line number in the file
 * where the rotl instruction appears.
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	if (*stack != NULL && (*stack)->next != NULL)
	{
		stack_t *temp = *stack;

		while (temp->next != NULL)
			temp = temp->next;
		temp->next = *stack;
		*stack = (*stack)->next;
		temp->next->prev = NULL;
		temp->next->next = NULL;
	}
	(void)line_number;
}
