#include "monty.h"
/**
 * _putchar - function that ...
 * @stack: pointer of a list ???
 * @line_number: int ???
 */

void _putchar(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		error = 1;
		return;
	}

	if ((*stack)->n > 127 || (*stack)->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		error = 1;
		return;
	}

	putchar((*stack)->n);
	putchar('\n');
}
