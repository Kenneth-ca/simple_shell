#include "shell.h"

/**
 * call_func - A function that will redirect to the right function
 * @buff: the buffer
 * @argv: argument from main
 * @pars: command requested from user
 * @path: the path
 * @env: the enviroment
 *
 */

void call_func(char *buff, char **argv, char **pars, char **env, paths_t *path)
{
	if (!_strcmp(pars[0], "exit"))
		func_exit(buff, pars, path);
	else
		{
			exec_args(buff, argv, pars, env, path);
		}
}
