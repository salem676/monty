/*
 * File: free_list_opcode.c
 * Author: salem676
 */
#include "monty.h"
/**
 * free_list_opcode - function that frees the opcode linked list.
 * @head: head of the linked list.
 * Description: as above.
 * Return: void.
 */
void free_list_opcode(list_t *head)
{
	list_t *temp;
	/*
	 * @temp: ptr to list_t.
	 */
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->inst);
		free(temp);
	}
}
