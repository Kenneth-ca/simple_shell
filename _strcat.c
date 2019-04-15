#include "shell.h"

/**
 * _strcat - concatenates two strings
 * @dest: dest string to concatenate
 * @src: source string to concatenate
 *
 * Return: a concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int length, i;

	for (i = 0, length = 0; *(dest + i) != '\0'; i++)
		length++;

	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + (length + i)) = *(src + i);

	*(dest + (length + i)) = *(src + i);
	return (dest);
}
