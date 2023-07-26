#include "shell.h"

/**
 * main - a simple shell built on the linux kernel
 * @ac: the number of command line arguments of this program
 * @av: an array of the command line arguments
 * @env: the environment variables of this program
 *
 * Return: 0 if successful
 */
int main(int ac __attribute__((unused)), char **av __attribute__((unused)),
	char **env)
{
	char *path, *pathname, **argv, *lineptr = NULL;
	size_t n = 0;
	ssize_t gRet = 0;
	int i, eRet, execCount = 0, piped = 0;

	while (1 && piped == 0)
	{
		execCount++;
		piped = display_prompt();

		/* Read input from terminal */
		gRet = getline(&lineptr, &n, stdin);
		if (exit_fn(lineptr, &gRet) == 0)
			continue;
		/* Isolate PATH */
		path = iso_path(env);

		/* Tokenize input string */
		argv = sh_tok(lineptr);

		/* Validate pathname */
		pathname = val_pathname(argv[0], path);
		if (pathname == NULL)
		{
			free_pa(argv, path);
			perror("./hsh");
			continue;
		}

		/* Create child process to execute command */
		eRet = execute(pathname, argv, env);

		free_pa(argv, path);
		free(pathname);
	}
	return (0);
}
