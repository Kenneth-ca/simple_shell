#include "shell.h"

/**
 * _strdup - copy a string
 * @str: string
 *
 * Return: number acci code
 */
char *_strdup(char *str)
{
	int len, i;
	char *cpy;

	if (!str)
		return (NULL);

	for (i = 0, len = 0; *(str + i); i++)
		len++;

	cpy = malloc(len * sizeof(char) + 1);

	if (cpy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		*(cpy + i) = *(str + i);

	*(cpy + i) = '\0';

	return (cpy);
}
