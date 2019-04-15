#include "shell.h"

/**
 * free_lists - Function that frees lists
 * @head: a pointer to a linked list
 *
 */
void free_lists(paths_t *head)
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
