#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * main - Entry point for the Monty interpreter.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * Return: EXIT_SUCCESS if the program runs successfully,
 * otherwise EXIT_FAILURE.
 */
int main(int argc, char *argv[])
{
	FILE *file;
	stack_t *stack = NULL;
	char *line = NULL;
	size_t len = 0;
	int read;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
		return (EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");

	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}
	stack = NULL;

	while ((read = getline(&line, &len, file)) != -1)
	{
		execute_opcode(line, &stack, 0);
	}
	free(line);
	fclose(file);
	return (EXIT_SUCCESS);
}
