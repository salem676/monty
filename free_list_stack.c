/*
 * File: free_list_stack.c
 * Author: salem676
 */
#include "monty.h"
/**
 * free_list_stack - function that frees memory of the stack.
 * @head: head of the stack.
 * Description: as above:
 * Return: void.
 */
void free_list_stack(stack_t *head)
{
	stack_t *temp;
	/*
	 * @temp: ptr to stack_t.
	 */
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
