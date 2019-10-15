#include "holberton.h"
#include <stdlib.h>
/**
* _strdup - Function that returns a pointer to a new string which is a
* duplicate of string @str
* @str: first char var
*
* Return: NULL if str is NULL, or pointer to the dupe string
*/
char *_strdup(char *str)
{
	int i = 0, j;
	char *dup;

	if (str == NULL)
		return (NULL);
	for (; str[i] != '\0'; i++)
		;
	i++;
	dup = malloc(i * sizeof(char));
	if (dup == NULL)
	return (NULL);
	for (j = 0; j < i; j++)
		dup[j] = str[j];
	return (dup);
}
