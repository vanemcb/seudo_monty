#include "monty.h"

int main(int ac, char **av)
{
	char **array_lines = NULL, *buffer = NULL;
	int i = 0;
	/* stack_t *h = NULL; */

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit (EXIT_FAILURE);
	}

	buffer = read_m(av[1]);

	array_lines = _token(buffer, "\n");

	while (array_lines[i])
	{
		printf("%s\n", array_lines[i]);
		/* call_function(array_lines[i], &h); */
		i++;
	}
	free(array_lines);
	free(buffer);

	return (0);
}
