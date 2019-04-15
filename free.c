#include "shell.h"

/**
 * free_list - Function that frees lists
 * @head: a pointer to a linked list
 *
 */
void free_list(paths_t *head)
{
	paths_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->path);
		free(head);
		head = tmp;
	}
}

/**
 * free_parsed - A function that frees arguments
 * @parsed: the arguments to be free
 *
 */
void free_parsed(char **parsed)
{
	if (parsed)
		free(parsed);
}
