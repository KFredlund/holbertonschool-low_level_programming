#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* get_bit - Function that returns the value of a bit
* at a given index
* @n: int var
* @index: index of the bit, starting from 0
*
* Return: the value of the bit at @index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (index > 64)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
