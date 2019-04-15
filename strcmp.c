#include "shell.h"
/**
 * _strcmp - show a table whit 9 multiplication
 * @s1: string1
 * @s2: string2
 *
 * Return: number acci code
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; (*s1 != '\0' && *s2 != '\0') && *s1 == *s2; i++)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
