/*
 * File: push.c
 * Author: salem676
 */
#include "monty.h"
/**
 * push - function that pushes nodes in the stack.
 * @stack: stack structure.
 * @line_number: number of instructions.
 * Return: void.
 */
void push(stack_t **stack, unsigned int line_number)
{
	core_stack_queue(stack, line_number, 0);
}
/**
 * stack - function that pushes nodes in the stack.
 * @stack: stack structure.
 * @line_number: number of instructions.
 * Return: void.
 */
void stack(stack_t **stack, unsigned int line_number)
{
	core_stack_queue(stack, line_number, 1);
}
/**
 * queue - function that pushes nodes in the queue.
 * @stack: stack structure.
 * @line_number: number of instructions.
 * Return: void.
 */
void queue(stack_t **stack, unsigned int line_number)
{
	core_stack_queue(stack, line_number, 2);
}
