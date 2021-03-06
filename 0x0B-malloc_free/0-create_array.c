#include "holberton.h"
#include <stdlib.h>
/**
* create_array - A function that creates an array of chars, and initializes
* it with a specific char
* @size: first int var
* @c: first char var
* Return: pointer to the array or NULL
*/

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(size * sizeof(char));
	if (s == NULL || size == 0)
		return (NULL);
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
