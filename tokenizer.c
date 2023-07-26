#include "shell.h"

/**
* sh_tok - tokenizes the input string
* @lineptr: a pointer to the input string in the shell wrapper function
*
* Return: the array containing the tokens created
*/

char **sh_tok(char *lineptr)
{
char **argv, *token, *lineptrCpy = NULL, *delim = " \n";
int i = 0, tokenCount = 0;

if (lineptr == NULL)
{
perror("error (sh_tok)");
return (NULL);
}
/* Duplicate the input string */
lineptrCpy = _strdup(lineptr);

/* Count the number of tokens */
token = strtok(lineptr, delim);

while (token)
{
tokenCount++;
token = strtok(NULL, delim);
}

/* Allocate memory for char pointers in argv */
argv = malloc(sizeof(char *) * (tokenCount + 1));
if (argv == NULL)
{
perror("malloc error");
return (NULL);
}
/* Parse the input string */
token = strtok(lineptrCpy, delim);

while (token)
{
argv[i++] = _strdup(token);
token = strtok(NULL, delim);
}
argv[i] = NULL;
free(lineptrCpy);
return (argv);
}
