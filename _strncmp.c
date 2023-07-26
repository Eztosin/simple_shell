#include "shell.h"

/**
* _strncmp - compares the first n bytes of two strings
* @str1: the first string to be compared
* @str2: the second string to be compared
* @n: the number of bytes to be compared
*
* Return: 0 if the number of bytes compared are identical
*/

int _strncmp(char *str1, char *str2, int n)
{
int i = 0;

if ((!str1) || (!str2) || (!n))
{
return (-1);
}
while (str1[i] && str2[i] && i < n)
{
if (str1[i] != str2[i])
{
return (str1[i] - str2[i]);
}
i++;
}
return (0);
}
