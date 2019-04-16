#include "shell.h"

/**
 * func_exit - Function to exit the program
 * @buffer: the input buffer
 * @parsed: the parsed arguments
 * @p_path_string: the path
 *
 */
void func_exit(char *buffer, char **parsed, paths_t *p_path_string)
{
	int exit_num = 0;

	if (_strcmp(parsed[0], "exit") == 0)
	{
		if (parsed[1])
		{
			exit_num = _atoi(parsed[1]);
			if (exit_num)
			{
				free(buffer);
				free_list(p_path_string);
				_exit(exit_num);
			}
		}
		free(buffer);
		free_list(p_path_string);
		_exit(0);
	}
}
