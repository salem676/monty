/*
 * File: _mod.c
 * Author: salem676
 */
#include "monty.h"
/**
 * _mod - function that mod top values.
 * @stack: stack structure.
 * @line_number: number of instructions.
 * Description: as above.
 * Returns: void.
 */
void _mod(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;
	int n;
	/*
	 * @temp: tmp var for pointer to stack_t.
	 * @n: for length.
	 */
	n = stack_len(*stack);
	if (n < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		if (list_opcode != NULL)
			free_list_opcode(list_opcode);
		if (*stack != NULL)
			free_list_stack(*stack);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		if (list_opcode != NULL)
			free_list_opcode(list_opcode);
		if (*stack != NULL)
			free_list_stack(*stack);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	temp->next->n %= temp->n;
	pop(stack, line_number);
}
