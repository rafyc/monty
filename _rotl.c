#include "monty.h"
/**
 * _mul - function that ...
 * @stack: pointer of a list ???
 * @line_number: int ???
 */

void _rotl(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	stack_t *temp = *stack;
	stack_t *last = *stack;

	(*stack)->next = (*stack);
	(*stack)->prev = NULL;

	while (temp->next)
	{
		temp = temp->next;
		last = last->next;
	}

	last->next = NULL;
	last->prev = temp;
	temp->next = last;
}
