#include "monty.h"

/**
 * main - function that runs the monty program
 * @argc: number of arguments
 * @argv: Value of the argument
 * Return: 0 on success or EXIT_FAILURE on error
 */

int main(int argc, char *argv[])
{
	FILE *ptr;
	stack_t **stack = NULL;
	size_t size = 0;
	unsigned int line_number = 0;
	char **tabtoken;
	char **line, **token;
	int i = 0;
	void (*func)(stack_t * *stack, unsigned int line_number);

	if (argc != 2)
	{
		fprint(2, "USAGE: monty fil\n");
		exit(EXIT_FAILURE);
	}

	ptr = fopen(argv[1], "r");
	if (ptr == NULL)
	{
		fprintf(2, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (getline(&line, &size, &ptr) != -1)
	{
		line_number++;
		token = strtok(line, " ");

		if (strcmp(token, "push") == 0)
		{
			token = strtok(NULL, " ");
			_push(token, stack, line_number);
		}

		else
			get_op(token, stack, line_number);
	}

	exit(0);
}

/**
	line = _readline(ptr);

	while (line[line_number])
	{
		tabtoken = _tokenize(line[i]);
		func = get_op(tabtoken[0], stack, line_number);
		line_number++;
	}
}
*/
