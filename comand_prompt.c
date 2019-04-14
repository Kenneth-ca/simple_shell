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
    while (1)
    {
        if (isatty(0))
            write(STDOUT_FILENO, "$(╯°□°）╯ "
            , strlen("$(╯°□°）╯ "));
    }
}
