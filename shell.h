#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <signal.h>

/**
 * struct path_s - singly linked list for path
 * @path: information of each part of the path
 * @next: pointer to the next node
 *
 */
typedef struct path_s
{
	char *path;
	struct path_s *next;

} paths_t;

void shell(char **argv, char *envp[]);
paths_t *get_path(char **env);
paths_t *create_struct(paths_t **head, char *str);
void parse_text(char *str, char **parsed);
void parse_text_path(char *str, char **parsed);
void func_exit(char *buffer, char **parsed, paths_t *p_path_string);
void free_list(paths_t *head);
void free_parsed(char **parsed);
char *_strdup(char *str);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
int _atoi(char *s);

#endif
