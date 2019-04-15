#include "shell.h"
/**
 * _strcpy - show a table whit 9 multiplication
 *@dest: string dest
 *@src: string source
 *
 * Return: char of strings
 */
char *_strcpy(char *dest, char *src)
{
	int i, j, length;

	for (i = 0; *src != '\0'; i++)
	{
		src++;
	}
	length = i;
	for (j = length; j > 0; j--)
	{
		src--;
	}
	for (i = 0; i < length && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
		dest[i] = '\0';
	return (dest);
}
