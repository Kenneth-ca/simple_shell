#include "shell.h"

/**
 * parse_text - A function that parses text of a string into tokens
 * @str: string received to be parsed
 * @parsed: string that will store the tokens
 *
 */
void parse_text(char *str, char **parsed)
{
	const char delimiters[] = " \n\"";
	char *dest = NULL;
	int i = 0;

	dest = strtok(str, delimiters);
	while (dest)
	{
		parsed[i] = dest;
		dest = strtok(NULL, delimiters);
		i++;
	}
	parsed[i] = NULL;
}
