#include "shell.h"

/**
* _strcmp - compares two strings
*
* @s1: one of the strings to be compared with the other
*
* @s2: the other string to be compared
*
* Return: +ve, -ve int, or 0
*/

int _strcmp(char *s1, char *s2)
{
int i;

for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
}
return (0);
}
