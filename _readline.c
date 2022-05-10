#include "monty.h"

/**
 * readline -
 * @ptr:
 * Return:
 */

char **_readline(FILE *ptr)
{
	char **line;
	char **tabline;
	size_t size = 0;
	int i = 0;

	while (getline(&line, &size, ptr) != -1)
	{
		tabline[i] = line;
		i++;
	}

	tabline[i + 1] = '\0';
	return (tabline);
}
