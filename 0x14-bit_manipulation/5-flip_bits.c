#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
int helper_flip(int n);
/**
* flip_bits - A function that returns the number of bits
* you would need to flip to get from one number to another
* @n: long int var
* @m: long int var
*
* Return: number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (helper_flip(n ^ m));
}
/**
* helper_flip- A function that helps flip_bits to return
* the number of bits
* you would need to flip to get from one number to another
* @n: int var
*
* Return: count
*/
int helper_flip(int n)
{
	int count = 0;

	while (n)
	{
		count += n & 1;
		n >>= 1;
	}
	return (count);
}
