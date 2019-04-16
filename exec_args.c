#include "shell.h"

/**
 * exec_args - A funtion that executes a command in a child process
 * @argv: argument
 * @pars: string received
 * @env: enviroment variable
 * @path: the path
 * @buff: the buffer
 *
 */
void exec_args(char *buff, char **argv, char **pars, char **env, paths_t *path)
{
	int process, status = 0;
	pid_t pid;
	char *text_parsed;

	text_parsed = check_path(pars, path);
	pid = fork();
	if (pid == -1)
	{
		perror("Fork failed");
		free_list(path);
		free(buff);
		_exit(1);
	}
	else if (pid == 0)
	{
		process = execve(text_parsed, pars, env);
		if (process < 0)
		{
			write(STDERR_FILENO, argv[0], _strlen(argv[0]));
			write(STDERR_FILENO, ": ", 2);
			write(STDERR_FILENO, "1", 1);
			write(STDERR_FILENO, ": ", 2);
			write(STDERR_FILENO, pars[0], _strlen(pars[0]));
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
