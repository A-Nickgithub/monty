#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * pstr - Prints the string starting at the top of the stack.
 * @stack: A pointer to the top of the stack.
 * @line_number: The line number in the file
 * where the pstr instruction appears.
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	while (temp != NULL && temp->n != 0 && (temp->n >= 0 && temp->n <= 127))
	{
		putchar(temp->n);
		temp = temp->next;
	}
	putchar('\n');
	(void)line_number;
}
