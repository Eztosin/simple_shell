#include "shell.h"

/**
 * val_pathname - creates a comand's full path and check if it exits in PATH
 * @command: the command to be validated
 * @path: a copy of the PATH variable from env
 *
 * Return: a valid pathname or NULL
 */
char *val_pathname(char *command, char *path)
{
	char *token, *pathname, *delim = "=:";
	struct stat sbuff;

	if (stat(command, &sbuff) == 0)
	{
		return (_strdup(command));
	}
	else
	{
		token = strtok(path, delim);

		while (token)
		{
			pathname = malloc(sizeof(char) * (_strlen(token) + _strlen(command) + 2));
			if (pathname == NULL)
			{
				perror("malloc error");
				exit(EXIT_FAILURE);
			}

			_strcpy(pathname, token);
			_strcat(pathname, "/");
			_strcat(pathname, command);

			if (stat(pathname, &sbuff) == 0)
			{
				return (pathname);
			}
			free(pathname);
			pathname = NULL;

			token = strtok(NULL, delim);
		}
	}
	return (pathname);
}
