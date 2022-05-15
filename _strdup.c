/*
 * File: _strdup.c
 * Author: salem676
 */
#include "monty.h"
/**
 * _strdup - returns pointer to newly allocated memory.
 * @str: string to be allocated.
 * @fp: open file.
 * Description: as above stated.
 * Return: return a string allocated or NULL if it fails.
 */
char *_strdup(char *str, FILE *fp)
{
	int i;
	char *new;
	/*
	 * @i: .
	 * @new: .
	 */
	if (str == NULL)
		return (NULL);
	i = _strlen(str);
	new = _calloc(i + 1, sizeof(char));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		if (list_opcode)
			free_list_opcode(list_opcode);
		fclose(fp);
		exit(EXIT_FAILURE);
	}
	for (i = 0; i < str[i]; i++)
		new[i] = str[i];

	new[i] = '\0';
	return (new);
}
