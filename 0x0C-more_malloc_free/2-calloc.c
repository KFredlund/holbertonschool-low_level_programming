#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - A function that allocates memory for an
 * array using malloc, setting the mem to 0
 * @nmemb: number of ints
 * @size: size in bytes of array @nmemb
 * Return: Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *str;
	unsigned int i;

	if ((nmemb == 0) || (size == 0))
		return (NULL);
	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*(char *)str = 0;
	return (str);
}
