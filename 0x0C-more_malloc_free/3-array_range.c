#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array
 * of ints
 * @min: range minimum
 * @max: range max
 * Return: Pointer to the new array
 */
int *array_range(int min, int max)
{
	int *str;
	int i;

	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++)
		;
	str = malloc(sizeof(int) * i);
	if (str == NULL)
		return (NULL);
	str[i] = '\0';
	return (str);
}
