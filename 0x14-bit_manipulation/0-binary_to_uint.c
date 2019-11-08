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
	unsigned int total = 0;

	for (; *b != '\0'; b++)
	{
		if (*b != '1' && *b != '0')
			return (0);
		total = (total * 2) + (*b - '0');
	}
	return (total);
}
