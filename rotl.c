#include "monty.h"
/**
 * rotl - function that rotate the top of the stack.
 * @stack: stack structure.
 * @line_number: number of instruction.
 * Description: as above.
 * Return: void.
 */
void rotl(stack_t **stack, UN unsigned int line_number)
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
	temp->next = *stack;
	(*stack)->prev = temp;
	temp = (*stack)->next;
	(*stack)->next = NULL;
	temp->prev = NULL;
	*stack = temp;
}
