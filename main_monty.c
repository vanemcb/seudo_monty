#include "monty.h"

int main(int ac, char **av)
{
	char **array_lines = NULL;
	int i = 0;
	/*stack_t *head = NULL;*/

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit (EXIT_FAILURE);
	}

	array_lines = read_m(av[1]);

	while (array_lines[i])
	{
		printf("%s", array_lines[i]);
		/*call_function(array_lines[i], &head);*/
		free(array_lines[i]);
		i++;
	}
	free(array_lines);

	return (0);
}
