#include "monty.h"

int get_op(char *line, stack_t **stack, unsigned int linenumber)
{
	instruction_t func[] =
		{
			{"push", _push},
			{"pall", _pall},
			{"pint", _pint},
			{"pop", _pop},
			{"swap", _swap},
			{"add", _add},
			{"nop", _nop},
			{NULL, NULL},
		};

	int i = 0;

	while (func[i].opcode)
	{
		if (strcmp(func[i].opcode, line) == 0)
		{
			func[i].f(stack, linenumber);
			exit(EXIT_SUCCESS);
		}
		i++;
	}
	return (0);
}
