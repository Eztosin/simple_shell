#include "shell.h"

/**
 * free_pa - frees argv and path
 * @argv: the argument vector
 * @path: contains the path variable
 */
void free_pa(char **argv, char *path)
{
	int i;

	for (i = 0; argv[i]; i++)
	{
		free(argv[i]);
	}
	free(argv);
	free(path);
}
