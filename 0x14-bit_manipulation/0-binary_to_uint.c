#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* binary_to_uint - Function that converts a binary number
* to an unsigned int
* @b: pointer to a binary number to be converted
*
* Return: the converted number
*/
unsigned int binary_to_uint(const char *b)
{
	int total = 0;

	while (b)
	{
		total *= 2;
		if (*b++ == '1')
			total += 1;
	}
	return (0);
}
