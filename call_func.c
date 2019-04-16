#include "shell.h"

/**
 *
 *
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
