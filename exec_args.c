#include "shell.h"

/**
 * exec_args - A funtion that executes a command in a child process
 * @argv: argument
 * @parsed: string received
 * @env: enviroment variable
 * @p_path_string: the path
 *
 */
void exec_args(char *buffer, char **argv, char **parsed, char **env, paths_t *p_path_string)
{
	int process, status = 0;
	pid_t pid;
	char *text_parsed;

	text_parsed = check_path(parsed, p_path_string);
	pid = fork();
	if (pid == -1)
	{
		perror("Fork failed");
		free_list(p_path_string);
		free(buffer);
		_exit(1);
	}
	else if (pid == 0)
	{
		process = execve(text_parsed, parsed, env);
		if (process < 0)
		{
			write(STDERR_FILENO, argv[0], _strlen(argv[0]));
			write(STDERR_FILENO, ": ", 2);
			write(STDERR_FILENO, "1", 1);
			write(STDERR_FILENO, ": ", 2);
			write(STDERR_FILENO, parsed[0], _strlen(parsed[0]));
			write(STDERR_FILENO, ": not found\n", 13);
			exit(127);
		}
	}
	else
	{
		/**
		 * waiting for child to terminate
		 */
		wait(&status);
		free(text_parsed);
	}
}
