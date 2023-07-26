#include "shell.h"

/**
 * iso_path - isolates the PATH from a process' environment
 * @env: contains a process' entire environment
 *
 * Return: a pointer to the PATH
 */
char *iso_path(char **env)
{
	int i;
	char *path = NULL;

	if (env)
	{
		for (i = 0; env[i]; i++)
		{
			if (_strncmp(env[i], "PATH=", 5) == 0)
			{
				path = _strdup(env[i]);
			}
		}
	}
	return (path);
}
