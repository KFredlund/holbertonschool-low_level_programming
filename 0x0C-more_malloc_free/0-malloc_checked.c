#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - Function that allocates memory using malloc
 * @b: int variable
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *str;

	str = malloc(b);
	if (str == NULL)
		exit(98);
	else
		return (str);
}
