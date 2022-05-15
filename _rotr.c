#include "monty.h"
/**
 * _rotr - function that rotate a node
 * @stack: list
 * @line_number: line of the program
 */

void _rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;
	stack_t *temp2 = NULL;

	(void)line_number;

	if (*stack == NULL || stack == NULL)
		return;
	temp = NULL;
	temp2 = NULL;
	while (*stack)
	{
		temp = (*stack)->next;
		(*stack)->next = temp2;
		temp2 = *stack;
		*stack = temp;
	}
	*stack = temp2;
}
