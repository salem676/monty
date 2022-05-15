/*
 * File: sub.c
 * Author: salem676
 */
#include "monty.h"
/**
 * sub - function that sub top values.
 * @stack: stack structure.
 * @line_number: number of instructions.
 * Description: as above.
 * Return: return.
 */
void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;
	int n;
	/*
	 * @temp: in null.
	 * @n: length.
	 */
	n = stack_len(*stack);
	if (n < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		if (list_opcode != NULL)
			free_list_opcode(list_opcode);
		if (*stack != NULL)
			free_list_stack(*stack);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	temp->next->n -= temp->n;
	pop(stack, line_number);
}
