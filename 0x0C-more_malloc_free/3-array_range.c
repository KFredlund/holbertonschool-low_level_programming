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
	str = malloc(sizeof(int) * (max - min + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; min + i <= max; i++)
		str[i] = min + i;
	return (str);
}
