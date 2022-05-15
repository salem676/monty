/*
 * File: rotr.c
 * Author: salem676
 */
#include "monty.h"
/**
 * rotr - function that rotate the top of the stack.
 * @stack: stack structure.
 * @line_number: number of instruction.
 * Description: as above.
 * Return: void.
 */
void rotr(stack_t **stack, UN unsigned int line_number)
{
	stack_t *temp = NULL;
	/*
	 * @temp: ptr to stack_t in null.
	 */
	if (*stack == NULL)
		return;
	if ((*stack)->next == NULL)
		return;
	temp = (*stack);
	for (; temp->next; temp = temp->next)
		;
	temp->prev->next = NULL;
	temp->next = *stack;
	temp->prev = NULL;
	(*stack)->prev = temp;
	*stack = temp;
}
