/*
 * File: stack_len.c
 * Author: salem676
 */
#include "monty.h"
/**
 * stack_len - function that calculates the length of stack.
 * @head: head of the stack.
 * Description: as above.
 * Return: length.
 */
int stack_len(stack_t *head)
{
	int i = 0;
	/*
	 * @i: counter.
	 */
	for (; head; head = head->next, i++)
		;
	return (i);
}
