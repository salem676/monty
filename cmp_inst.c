/*
 * File: cmp_inst.c
 * Author: salem676
 */
#include "monty.h"
/**
 * cmp_inst - function that compares instructions with the function pointers.
 * @str1: string 1.
 * @str2: string 2.
 * Description: as above stated.
 * Return: 0 on success and -1 otherwise.
 */
int cmp_inst(char *str1, char *str2)
{
	int i = 0, n = 0;
	/*
	 * @i: counter.
	 * @n: integer result value var.
	 */
	for (i = 0; str2[i]; i++)
	{
		if (str1[i] == str2[i])
			n = 0;
		else
		{
			n = str1[i] - str2[i];
			break;
		}
	}
	if (str1[i] != ' ' && str1[i] != '\t' && str1[i] != '\0' && str1[i] != '\n')
		n = 1;
	return (n);
}
