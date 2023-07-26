#include "shell.h"

/**
 * exit_fn - handles conditions to exit the shell
 * @lineptr: a pointer to the input string
 * @gRet: the return value of getline in the shell wrapper
 *
 * Return: 0 if the input string is simply a newline character
 * else it returns 1
 */
int exit_fn(char *lineptr, ssize_t *gRet, int piped)
{
	int efn_Ret = 1;

	if (*gRet == -1 || _strcmp(lineptr, "exit\n") == 0)
	{
		if (*gRet == -1)
		{
			write(STDOUT_FILENO, "\n", 1);
		}
		free(lineptr);
		exit(EXIT_FAILURE);
	}
	if (_strcmp(lineptr, "\n") == 0)
	{
		efn_Ret = 0;
	}
	return (efn_Ret);
}
