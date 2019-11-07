#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* print_binary - A function that prints the binary
* representation of a number
* @n: number to be converted to binary
*
* Return: Never
*/
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	n = n & 1;
	_putchar(n + '0');
}
