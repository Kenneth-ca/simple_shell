#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <signal.h>

typedef struct path_s
{
	char *path;
	struct path_s *next;

} paths_t;

void shell(char **argv, char *envp[]);
paths_t *get_path(char **env);
paths_t *create_struct(paths_t **head, char *str);
void parse_text_path(char *str, char **parsed);

#endif
