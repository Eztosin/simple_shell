#include "shell.h"

/**
* _strcat - concatenates one string to another
*
* @dest: the string to be concatenated to
* @src: the string to be concatenated
*
* Return: a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
unsigned int i, destLength;

/* Pass the string length of both strings to seperate variables */
destLength = _strlen(dest);

/* Concatenate the second string to dynamically allocated memory */
for (i = 0; src[i]; i++)
{
dest[destLength + i] = src[i];
}
/* Add the null byte at the end of the new string */
dest[destLength + i] = '\0';

/* Return pointer to the dynamically allocated memory */
return (dest);
}
