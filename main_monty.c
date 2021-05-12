#include "monty.h"

int main(int ac, char **av)
{
	char **array_lines = NULL, **array_lines_token = NULL, *buffer = NULL;
	int i = 0, x = 0;

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit (EXIT_FAILURE);
	}

	buffer = read_m(av[1]);

	array_lines = _token(buffer, "\n");

	while (array_lines[i])
	{
		/*printf("%s\n", array_lines[i]);*/
		array_lines_token = _token(array_lines[i], " ");
		while (array_lines_token[x])
		{
			printf("%s\n", array_lines_token[x]);
			x++;
		}
		free(array_lines_token);
		x = 0;
		i++;
	}
	free(array_lines);
	free(buffer);

	return (0);
}
