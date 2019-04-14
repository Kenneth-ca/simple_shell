#include "shell.h"

/**
 * main - main entry of the project
 * @argc: number of arguments
 * @argv: arguments recieved
 * @envp: enviroment variable
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[], char *envp[])
{
	(void)argc;
	(void)argv;
	shell(argv, envp);

	return (0);
}
