#include "shell.h"

/**
 * sighandler - Funtion to change the CTRL+C behavior
 * @sig_num: unused parameter
 *
 */
void sighandler(int sig_num)
{
	(void)sig_num;
	write(STDOUT_FILENO, "\n$ ", _strlen("\n$ "));
	fflush(stdout);
}

/**
 * shell - Function to generate a prompt
 * @argv: arguments
 * @envp: Receive the arguments passed to shell
 *
 * Return: No returns in this function
 */
void shell(char **argv, char *envp[])
{
	char *parsed_args[1024];
	size_t nbytes = 32;
	char *buffer;
	paths_t *p_path_string;

	p_path_string = get_path(envp);
	signal(SIGINT, sighandler);
	while (1)
	{
		if (isatty(0))
			write(STDOUT_FILENO, "$ ", _strlen("$ "));
		buffer = malloc(sizeof(char) * nbytes);
		if (buffer)
			return;
		if (getline(&buffer, &nbytes, stdin) != EOF)
		{
			if (buffer[0] != '\n' && buffer[0])
			{
				parse_text(buffer, parsed_args);
				call_func(buffer, argv, parsed_args, envp, p_path_string);
			}
			else
			{
				free(buffer);
				continue;
			}
		}
		else
		{
			free_list(p_path_string);
			free(buffer);
			break;
		}
	}
}
