#include <stdio.h>
#include <stdlib.h>
#include "monty.h"
#include <ctype.h>

/**
 * pchar - Prints the character at the top of the stack.
 * @stack: A pointer to the top of the stack.
 * @line_number: The line number in the file
 * where the pchar instruction appears.
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	int value;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	value = (*stack)->n;

	if (value < 0 || value > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (isprint(value))
		putchar(value);
	else
		printf("\\x%02X", value);
	putchar('\n');
}
