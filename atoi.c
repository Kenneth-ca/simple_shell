#include "shell.h"
/**
 * _atoi - string to int
 *@s: string
 *
 * Return: int
 */
int _atoi(char *s)
{
	unsigned int sum = 0, i = 0, neg = 1;

	if (s[i] != 0)
	{
		for (i = 0; (s[i] < 48 || s[i] > 57); i++)
		{
			if (s[i] == 45)
				neg = neg * -1;
		}
		for (; (s[i] >= 48 && s[i] <= 57); i++)
		{
			sum = sum * 10 - ((int)s[i] - '0');
		}
	}
	neg = neg * -1;
	return (sum * neg);
}
