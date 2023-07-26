#include "shell.h"

/**
* execute - executes a command if the pathname is valid
* @pathname: the full path to be executed
* @argv: the array of commands and its arguments
* @environ: the program environment variable
*
* Return: the status of the child process after it changes state
*/

int execute(char *pathname, char **argv, char **environ)
{
pid_t cp;
int eRet, wstatus = 0;

/* Create child process */
cp = fork();

/* Check if fork failed */
if (cp == -1)
{
perror("fork command failed");
return (-1);
}
/* Execute command in child process */
else if (cp == 0)
{
eRet = execve(pathname, argv, environ);
if (eRet == -1)
{
perror("execve failed to execute program");
exit(EXIT_FAILURE);
}
}
/* Parent process waits for child process to exit */
else
{
wait(&wstatus);
}
return (wstatus);
}
