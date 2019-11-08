#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* set_bit - A function that sets the value of a bit
* to 1 at a given point
* @n: int value to set at @index
* @index: point at which value @n is set
*
* Return: 1 of it worked, -1 if an error occured
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	*n |= (1 << index);
		return (*n);
}
