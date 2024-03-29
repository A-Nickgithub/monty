#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>

typedef struct stack_s
{
	    int n;
	        struct stack_s *prev;
		    struct stack_s *next;
} stack_t;

typedef enum {
	    STACK,
	        QUEUE
} stack_mode_t;

typedef struct instruction_s
{
	    char *opcode;
	        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void push(stack_t **stack, unsigned int line_number);
stack_t *add_node(stack_t **stack, int n);
void pall(stack_t **stack, unsigned int line_number);
int is_numeric(char *str);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void div_op(stack_t **stack, unsigned int line_number);
void mul_op(stack_t **stack, unsigned int line_number);
void mod_op(stack_t **stack, unsigned int line_number);
void execute_opcode(char *opcode, stack_t **stack, unsigned int line_number);
void pchar(stack_t **stack, unsigned int line_number);
void pstr(stack_t **stack, unsigned int line_number);
void rotl(stack_t **stack, unsigned int line_number);
void rotr(stack_t **stack, unsigned int line_number);
void addnode(stack_t **head, int n);
int main(int argc, char *argv[]);

#endif /* MONTY_H */

