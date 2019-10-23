#include "function_pointers.h"
/**
 * array_iterator - Function that executes a function given
 * as a parameter on each element of an array
 * @array: pointer variable
 * @size: struct variable size of array
 * @action: pointer to a function we need to use
 * Return: Always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action && array)
		for (i = 0; i < size; i++)
			(action)(array[i]);
}
