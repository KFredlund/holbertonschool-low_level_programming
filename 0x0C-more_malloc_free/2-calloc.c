#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - A function that allocates memory for an
 * array using malloc, setting the mem to 0
 * @nmemb: array of ints
 * @size: size in bytes of array @nmemb
 * Return: Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *str;

	str = malloc(sizeof(int) * size);
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (str == NULL)
		return (NULL);
	*str = 0;
	return (str);

}
