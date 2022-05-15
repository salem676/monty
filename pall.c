/*
 * File: pall.c
 * Author: salem676
 */
#include "monty.h"
/**
 * pall - function that prints the stack.
 * @stack: stack structure.
 * @line_number: number of instruction.
 * Description: .
 * Return: void.
 */
void pall(stack_t **stack, UN unsigned int line_number)
{
	stack_t *temp = NULL;
	int n = 0;
	/*
	 * @temp: ptr to stack_t temp.
	 * @n: integer init in zero.
	 */
	if (*stack == NULL)
		return;
	temp = *stack;
	while (temp)
	{
		n = temp->n;
		printf("%d\n", n);
		temp = temp->next;
	}
}
