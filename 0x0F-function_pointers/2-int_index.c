#include "function_pointers.h"
/**
 * int_index - A function that searchs for an int
 * @array: array var holding @size of elements
 * @size: number of elements in @array
 * @cmp: a pointer to the function to be used
 * to compare values
 * Return: the index of the first element for
 * which cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i <= size; i++)
		cmp(array[i]);
	return (cmp(array[i]));
}
