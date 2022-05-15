/*
 * File: nothing.c
 * Author: salem676
 */
#include "monty.h"
/**
 * nothing - function that frees if there is not coincidence.
 * @stack: stack structure.
 * @line_number: number of instruction.
 * Description: as above stated.
 * Return: void.
 */
void nothing(stack_t **stack, UN unsigned int line_number)
{
	if (list_opcode)
		free_list_opcode(list_opcode);
	if (*stack)
		free_list_stack(*stack);
	exit(EXIT_FAILURE);
}
