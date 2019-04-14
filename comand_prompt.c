#include "shell.h"

void shell(char **argv, char *envp[])
{
    while (1)
    {
        if (isatty(0))
            write(STDOUT_FILENO, "$(╯°□°）╯ ", strlen("$(╯°□°）╯ "));
    }
}