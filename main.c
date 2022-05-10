#include "monty.h"

/**
 * main - function that runs the monty program
 * @argc: number of arguments
 * @argv: Value of the argument
 * Return: 0 on success or EXIT_FAILURE on error
 */

int main(int argc, char *argv[])
{
	FILE *line;

	if (argc != 2)
	{
		fprint(2, "USAGE: monty fil\n");
		exit(EXIT_FAILURE);
	}

	line = fopen(argv[1], "r");
	if (line == NULL)
	{
		fprintf(2, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
}
