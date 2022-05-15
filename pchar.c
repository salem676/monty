/*
 * File: pchar.c
 * Author: salem676
 */
#include "monty.h"
/**
 * pchar - function that prints character at the top.
 * @stack: stack structure.
 * @line_number: number of instructions.
 * Description: as above.
 * Return: void.
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		if (list_opcode)
			free_list_opcode(list_opcode);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n < 0 || (*stack)->n >= 128)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		if (*stack)
			free_list_stack(*stack);
		if (list_opcode)
			free_list_opcode(list_opcode);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*stack)->n);
}
