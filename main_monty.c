#include "monty.h"

int main(int ac, char **av)
{
	char buffer[1024], **array_lines = NULL, **array_lines_token = NULL;
	int fd = 0, bytes_read = 0, i = 0, x = 0;

	(void)ac;

	fd = open(av[1], O_RDONLY);

	bytes_read = read(fd, buffer, 1024);
	buffer[bytes_read] = '\0';

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
	close(fd);
	return (0);
}
