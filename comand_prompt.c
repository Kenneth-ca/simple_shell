#include "shell.h"

/**
 * shell - Function to generate a prompt
 * @argv: arguments
 * @envp: Receive the arguments passed to shell
 *
 * Return: No returns in this function
 */
void shell(char **argv, char *envp[])
{
	ssize_t bytes_to_read;
	size_t num_bytes = 0;
	char *buffer;

	while (1)
	{
	if (isatty(0))
	write(STDOUT_FILENO, "$(╯°□°）╯ ", strlen("$(╯°□°）╯ "));
	buffer = NULL;
	bytes_to_read = getline(&buffer, &num_bytes, stdin);
	if (bytes_read == -1)
	{
		exit(-1);
	}
	}
}
