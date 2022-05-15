/*
 * File: free_all.c
 * Author: salem676
 */
#include "monty.h"
/**
 * free_all - function that frees all the memory heap.
 * @list: list of instructions.
 * @stack: list of stack.
 */
void free_all(list_t *list, stack_t *stack)
{
	if (list_opcode)
		free_list_opcode(list);
	if (stack)
		free_list_stack(stack);
}
