/*
 * File: clean_string.c
 * Author: salem676
 */
#include "monty.h"
/**
 * clean_string - function that cleans a string.
 * @buff: buffer to store string.
 * @str: string to be cleaned.
 * Return: the length of string.
 * Description: as above stated.
 */
int clean_string(char *buff, char *str)
{
	int i, j, k = 0;
	/*
	 * @i: counter.
	 * @j: counter.
	 * @k: counter.
	 */
	for (i = 0, j = 0; str[i] && str[i] != '\n'; i++)
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			buff[j] = str[i];
			k = 1;
			j++;
		}
		else if (k == 1 && (str[i] == ' ' || str[i] == '\t'))
			break;
	}
	buff[j] = ' ';
	j++;
	for (; str[i] && str[i] != '\n'; i++)
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			buff[j] = str[i];
			k = 2;
			j++;
		}
		else if (k == 2 && (str[i] == ' ' || str[i] == '\t'))
			break;
	}
	buff[j] = '\0';
	return (j);
}
