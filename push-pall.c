#include <stdio.h>
#include <stdlib.h>
#include "monty.h"
#include <string.h>
#include <stddef.h>


/**
 * push-Pushes an element to the stack.
 * @stack: A pointer to the top of the stack.
 * @line_number: The line number in the file where
 * the push instruction appears
 * Description: This function pushes an integer onto the stack..
 */
void push(stack_t **stack, unsigned int line_number)
{
	char *arg = strtok(NULL, " \t\n");
	int num;

	if (arg == NULL || !is_numeric(arg))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	num = atoi(arg);

	if (add_node(stack, num) == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
}

/**
 * pall-Prints all the values on the stack.
 * @stack: A pointer to the top of the stack.
 * @line_number: Unused parameter for consistency
 * with function pointer signature.
 * Description: This function prints all the values on the stack.
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	(void)line_number;

	temp = *stack;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}

/**
 * is_numeric-Checks if a string is a numeric value.
 * @str: The string to check.
 * Return: 1 if numeric, 0 otherwise.
 * Description: This function checks if a given string is a numeric value.
 */
int is_numeric(char *str)
{
	if (*str == '-')
		str++;

	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

