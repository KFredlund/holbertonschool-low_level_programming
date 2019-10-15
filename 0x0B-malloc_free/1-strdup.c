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
	int i;
	char *dup;
	dup = malloc(sizeof(*dup) * 10);
	str  = malloc(sizeof(char) * 10);
	
	if (str != NULL)
	{
		for (i = 0; i < '\0'; i++)
		{
			str[i] = dup[i];
		}
		free(str);
		return (dup);
	}
	else
		return (NULL);
}
