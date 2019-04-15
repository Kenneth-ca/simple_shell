#include "shell.h"

/**
 * check_path - compare two strings
 * @parsed: string1 from input
 * @h: path list
 *
 * Return: number acci code
 */
void check_path(char **parsed, paths_t *h)
{
	char *tmp = NULL;
	char *tmp2 = NULL;
	char *juanito = NULL;
	struct stat *buf;

	buf = malloc(sizeof(struct stat));
	if (buf == NULL)
		return;
	if (!h)
		return;
	while (h)
	{
		if (h->path)
		{
			juanito = _strdup(h->path);
			tmp = _strdup(_strcat(juanito, "/"));
			tmp2 = _strdup(_strcat(tmp, parsed[0]));
			if (stat(tmp2, buf) == 0)
			{
				parsed[0] = tmp2;
				break;
			}
			h = h->next;
		}
	}
	if (buf)
		free(buf);
	if (tmp)
		free(tmp);
	if (juanito)
		free(juanito);
}
