/*
 * File: add-node.c
 * Author: salem676
 */
#include "monty.h"
/**
 * add_nodeint - insert a node at the head of the stack.
 * @head: address to double linked list.
 * @n: node to add.
 * Return: address to the new node, otherwise return NULL.
 */
stack_t *add_nodeint(stack_t **head, const int n)
{
	stack_t *new;
	/*
	 * @new: pointer to stack_t.
	 */
	if (!head)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_list_opcode(list_opcode);
		if (head != NULL)
			free_list_stack(*head);
		exit(EXIT_FAILURE);
	}
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_list_opcode(list_opcode);
		if (head != NULL)
			free_list_stack(*head);
		exit(EXIT_FAILURE);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;

	*head = new;
	return (new);
}
/**
 * add_dnodeint_end - function that adds a new node at the end of a linked list.
 * @head: head of the linked list.
 * @n: Number of the linked list.
 * Description: as above.
 * Return: the address of the new node or NULL if it fails.
 */
stack_t *add_dnodeint_end(stack_t **head, const int n)
{
	stack_t *new = NULL, *tmp = NULL;
	/*
	 * @new: ptr to stack_t.
	 * @tmp: ptr to tmp var.
	 */
	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_list_opcode(list_opcode);
		if (head != NULL)
			free_list_stack(*head);
		exit(EXIT_FAILURE);
	}
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	for (; tmp->next;)
		tmp = tmp->next;
	tmp->next = new;
	new->prev = tmp;
	return (new);
}
