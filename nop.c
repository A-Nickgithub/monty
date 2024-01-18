#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * nop - Doesn't do anything.
 * @stack: A pointer to the top of the stack.
 * @line_number: The line number in the file where the nop instruction appears.
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
