/*
 * File: _strlen.c
 * Author: salem676
 */
#include "monty.h"
/**
 * _strlen - function that calculates a length of string.
 * @str: string to be checked.
 * Description:.
 * Return: the length of string or -1 if it fails.
 */
int _strlen(char *str)
{
	int i;
	/*
	 * @i: counter.
	 */
	if (str == NULL)
		return (-1);
	for (i = 0; str[i]; i++)
		;
	return (i);
}
