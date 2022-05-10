#include "monty.h"

/**
 * tokenize -
 * @ptr:
 * Return:
 */

char **_tokenize(char *line)
{
	int i = 0;
	char **tab_token = malloc(sizeof(char *) * 1024);
	char *token;

	if (tab_token == NULL)
	{
		perror("Error: malloc failed");
		exit(EXIT_FAILURE);
	}

	token = strtok(line, " ");
	while (token != NULL)
	{
		tab_token[i] = token;
		i++;
		token = strtok(NULL, " ");
	}
	tab_token[i] = NULL;

	return (tab_token);
}
