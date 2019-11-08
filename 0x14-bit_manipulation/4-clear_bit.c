#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* clear_bit - A function that sets the value of a bit to 0
* @n: number pointer with bit to clear
* @index: index at which to clear the bit
*
* Return: 1 if successfull, -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n &= (0 << index);
		return (*n);
}
