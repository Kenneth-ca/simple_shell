#include "shell.h"

/**
 * sighandler - Funtion to change the CTRL+C behavior
 * @sig_num: unused parameter
 *
 */
void sighandler(int sig_num)
{
	(void)sig_num;
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
	ssize_t bytes_to_read;
	size_t num_bytes = 0;
	char **parsed_args;
	char *buffer;
	paths_t *p_path_string;

	p_path_string = get_path(envp);
	signal(SIGINT, sighandler);
	while (1)
	{
		buffer = NULL;
		parsed_args = (char **)malloc(sizeof(char *) * 1024);
		parsed_args[1] = NULL;
		bytes_to_read = getline(&buffer, &num_bytes, stdin);
		if (bytes_to_read == -1)
		{
			if (buffer)
				free(buffer);
			if (p_path_string)
				free_list(p_path_string);
			if (parsed_args)
				free(parsed_args);
			exit(0);
		}
		if (buffer[0] != '\n' && buffer[0])
		{
			parse_text(buffer, parsed_args);
			func_exit(buffer, parsed_args, p_path_string);
			exec_args(argv, parsed_args, envp, p_path_string);
		}
		if (parsed_args)
			free_parsed(parsed_args);
		free(buffer);
	}
	free(buffer);
	if (p_path_string)
		free_list(p_path_string);

}
