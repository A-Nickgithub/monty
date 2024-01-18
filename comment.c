#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * execute_opcode - Executes the appropriate opcode based on the instruction.
 * @opcode: The opcode to execute.
 * @stack: A pointer to the top of the stack.
 * @line_number: The line number in the file where the opcode appears.
 */
void execute_opcode(char *opcode, stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;

	if (opcode[0] == '#')
		return;
}
