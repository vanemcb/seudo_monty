#include "monty.h"

void call_function(char *array_lines, stack_t **h)
{
	instruction_t instruct[] = {
		{"push", push_func},
		{"pall", pall_func},
		{"pint", pint_func},
		{"pop", pop_func},
		{"swap", swap_func},
		{"add", add_func},
		{"nop", nop_func},
		{NULL, NULL}
	};
	int x = 0, i = 0;
	char **array_lines_token = NULL;

	array_lines_token = _token(array_lines, " ");
	while (array_lines_token[x])
	{
		while (instruct[i].opcode != NULL)
		{
			if (strcmp(instruct[i].opcode, array_lines_token[0]) == 0);
			{
				instruct[x].f(h, )
			}
		}
		x++;
	}
	free(array_lines_token);
	x = 0;

}
