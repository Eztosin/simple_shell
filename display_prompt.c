#include "shell.h"

/**
* display_prompt - displays the prompt if the command
* is from the terminal
*
* Return: 1 if command was piped, else 0 is returned
*/

int display_prompt(void)
{
int piped = 0;

if (isatty(STDIN_FILENO))
{
write(1, "MadEz$ ", 7);
}
else
{
piped++;
}
return (piped);
}
