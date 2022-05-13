#include "monty.h"
/**
 * _rotl - function that rotates the stack to the top
 * @stack: pointer of a list
 * @line_number: int
 */

void _rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	stack_t *last;

	(void)line_number;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	last = *stack;

	while (last->next)
	{
		last = last->next;
	}

	last->next = temp;
	temp->prev = last;
	temp->next = NULL;
}
