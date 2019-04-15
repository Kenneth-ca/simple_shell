#include "shell.h"

/**
 * _strdup - Function that copies a string
 * @str: string
 *
 * Return: a copy of the string
 */
char *_strdup(char *str)
{
	int i;
	int len = 0;
	char *copy;

	if (!str)
		return (NULL);
	for (i = 0; *(str + 1); i++)
		len++;
	copy = malloc(len * sizeof(char) + 1);

	if (copy == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		*(copy + i) = *(str + i);
	*(copy + i) = '\0';
	return (copy);
}
