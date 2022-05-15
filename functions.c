#include "monty.h"
/**
 * free_malloc - free stack to memory.
 * @head: pointer to head of the stack.
 * Description: as above stated.
 * Return: void.
 */
void free_malloc(stack_t *head)
{
	stack_t *list = head;
	/*
	 * @list: ptr to stack_t struck init in head.
	 */
	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		list = head;
		head = head->next;
		free(list);
	}
}
/**
 * functions_monty - compare the opcodes and run the function asociate.
 * @stack: poiter to head of the stack.
 * @command_f: pass string to command of function.
 * @line_numb: line number in file.
 * Descripion: as above.
 * Return: void.
 */
void functions_monty(stack_t **stack, char *command_f, unsigned int line_numb)
{
	instruction_t funct_monty[] = {
		{"pall", pall}, {"push", push}, {"pint", pint},
		{"pop", pop}, {"swap", swap}, {"add", add},
		{"nop", nop}, {"sub", sub}, {"div", _div},
		{"mul", mul}, {"mod", mod}, {NULL, NULL}};
	unsigned int i = 0;
	int checker = 0;
	/*
	 * @funct_monty: functions are here.
	 * @i: integer var.
	 * @checker: init in zero.
	 */
	while (i < 11 && command_f != NULL)
	{
		if (command_f[0] == '#')
			break;
		if (strcmp(funct_monty[i].opcode, command_f) == 0)
		{
			funct_monty[i].f(stack, line_numb);
			checker = 1;
			break;
		}
		i++;
	}
	if (checker == 0 && command_f[0] != '#')
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_numb, command_f);
		free(command_f);
		var_glob[1] = 1;
		exit(EXIT_FAILURE);
	}
}
/**
 * nop - doesn't do anything.
 * @stack: pointer head stack.
 * @line_number: line number in file.
 * Description: as above.
 * Return: void.
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
