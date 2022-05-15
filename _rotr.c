#include "monty.h"
/**
 * _rotr - function that rotate a node
 * @stack: list
 * @line_number: line of the program
 */

void _rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	(void)line_number;

	if (*stack == NULL || stack == NULL)
		return;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->prev->next = NULL;
	(*stack)->prev = temp;
	temp->next = *stack;
	temp->prev = NULL;
	*stack = temp;
}
