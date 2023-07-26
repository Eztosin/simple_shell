#include "shell.h"

/**
 * _strdup - duplicates a string with dynamically allocated memory space
 * @str: the string to be duplicated
 *
 * Return: a pointer to the duplicated string in the memory heap
 * NULL is returned if str is NULL or if memory allocation fails
 */

char *_strdup(char *str)
{
	unsigned int i, length;
	char *dupStr;

	if (str == NULL)
	{
		return (NULL);
	}

	length = _strlen(str) + 1;

	dupStr = malloc(length * sizeof(char));
	if (dupStr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		dupStr[i] = str[i];
	}
	return (dupStr);
}
