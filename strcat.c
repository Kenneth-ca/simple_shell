#include "shell.h"

/**
 * _strcat - show a table whit 9 multiplication
 * @dest: string to pass
 * @src: string to add
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int length, i;

	for (i = 0, length = 0; *(dest + i) != '\0'; i++)
		length++;

	for (i = 0 ; *(src + i) != '\0' ; i++)
		*(dest + (length + i)) = *(src + i);

	*(dest + (length + i)) = '\0';
	return (dest);
}