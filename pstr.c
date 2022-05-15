/*
 * File: pstr.c
 * Author: salem676
 */
#include "monty.h"
/**
 * pstr - function that prints string of the stack.
 * @stack: stack structure.
 * @line_number: number of instruction.
 * Description: as above.
 */
void pstr(stack_t **stack, UN unsigned int line_number)
{
	stack_t *temp = NULL;
	/*
	 * @temp: ptr to stack_t structure in null.
	 */
	if (*stack == NULL)
	{
		putchar(10);
		return;
	}
	temp = *stack;
	while (temp)
	{
		if (temp->n <= 0 || temp->n >= 128)
		{
			putchar(10);
			return;
		}
		printf("%c", temp->n);
		temp = temp->next;
	}
	putchar(10);
}
